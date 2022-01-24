#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void prevSmall(vector<int> a){
    int n=a.size();
    vector<int> ans(n,0);
    stack<int> s;

    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=a[i]){
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

    for(int c:ans){
        cout<<c<<" ";
    }
}

void nextSmall(vector<int> a){
    int n=a.size();
    vector<int> ans(n,0);
    stack<int> s;

    for(int i=n-1;i>=0;i--){
        while (!s.empty() && s.top()>=a[i]){
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

    for(int s:ans){
        cout<<s<<" ";
    }
}

int main(){
    vector<int> a={4,2,1,5,6,3,2,4,2};
    //nextSmall(a);
    //cout<<endl;
    prevSmall(a);
}