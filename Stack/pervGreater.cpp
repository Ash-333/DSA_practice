#include<bits/stdc++.h>
using namespace std;

vector<int> prevGreater(vector<int> a){
    int n=a.size();
    vector<int> ans(n,0);
    stack<int> s;

    for(int i=0;i<n;i++){
        while(!s.empty() && s.top() <= a[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(a[i]);
    }
    return ans;
    // for(int ap:ans){
    //     cout<<ap<<" ";
    // }
}

int main(){
    vector<int> a={4,2,1,5,6,3,2,4,2};
    vector<int> as=prevGreater(a);
    for(int x:as){
        cout<<x<<" ";
    }
}