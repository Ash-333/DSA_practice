#include<bits/stdc++.h>
using namespace std;


void nextGreater(vector<int> &a){
    stack<int> s;
    int n=a.size();
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()<=a[i]){
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

    for(int x:ans){
        cout<<x<<" ";
    }

}

int main(){

    vector<int> arr={4,5,2,25,26};

    nextGreater(arr);
}