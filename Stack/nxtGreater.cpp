#include<bits/stdc++.h>
using namespace std;

void prevGreater(vector<int> a){
    int n=a.size();
    stack<int> s;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top() <= a[i]){
            s.pop();
        }

        if(s.empty()){
            v[i]=-1;
        }
        else{
            v[i]=s.top();
        }
        s.push(a[i]);
    }
    for(int c:v){
        cout<<c<<" ";
    }
}

void nextGreater(vector<int> a){
    int n=a.size();
    stack<int> s;
    vector<int> v(n,0);

    for(int i=n-1;i>=0;i--){

        while(!s.empty() && s.top()<=a[i]){
            s.pop();
        }

        if(s.empty()){
            v[i]=-1;
        }
        else{
            v[i]=s.top();
        }
        s.push(a[i]);
    }

    for(int x:v){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> v={4,5,2,25};
    nextGreater(v);
    cout<<endl;
    prevGreater(v);
    //vector<int> ans=nextGreater(v);
    // for(int x:ans){
    //     cout<<x<<" ";
    // }
}