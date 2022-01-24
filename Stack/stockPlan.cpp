#include<bits/stdc++.h>
using namespace std;

vector<int> stockPlanner(vector<int> v){
    int n=v.size();
    vector<int> ans(n,0);
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() && v[s.top]<=v[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=i-s.top();
        }
        else{
            ans[i]=i+1;
        }
        s.push(i);
    }
}

int main(){
    vector<int> stock={100,80,60,70,60,75,85};
    vector<int> ans=stockPlanner(stock);
    for(int x:ans){
        cout<<x<<" ";
    }
}