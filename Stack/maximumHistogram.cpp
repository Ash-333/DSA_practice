#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int> a){
    int n=a.size();
    vector<int> ans(n,0);
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()] >= a[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=n-1;
        }
        else{
            ans[i]=s.top()-1;
        }
        s.push(i);
    }

    return ans;
}

vector<int> prevSmaller(vector<int> a){
    int n=a.size();
    vector<int> ans(n,0);
    stack<int> s;

    for(int i=0;i<n;i++){
        while(!s.empty() && a[s.top()] >= a[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i]=0;
        }
        else{
            ans[i]=s.top()+1;
        }
        s.push(i);
    }
    return ans;
}

int maxArea(vector<int> a){
    int n=a.size();
    vector<int> ps=prevSmaller(a);
    vector<int> ns=nextSmaller(a);
    int m=0;
    for(int i=0;i<n;i++){
        int area=(ns[i]-ps[i]+1)*a[i];
        m=max(m,area);
    }
    return m;
}

int main(){
    vector<int> unit={6 2 5 4 5 1 6};
    cout<<maxArea(unit);

}