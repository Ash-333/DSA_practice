#include<bits/stdc++.h>
using namespace std;

void nextGreater(vector<int> v){
    stack<int> s;
    vector<int> ans;
    int n=v.size();

    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()<v[i]){
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

 void insertAtBottom(stack<int> s, int data){
     if(s.empty()){
         s.push(data);
         return;
     }

     int temp=s.top();
     s.pop();
     insertAtBottom(s,temp);
     s.push(temp);
 }

void reverse(stack<int> s){
    if(!s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,temp);
    //s.push(temp);
}

void insertBottom(stack<int>  s,int t){
    if(s.empty()){
        s.push(t);
        return;
    }

    int temp=s.top();
    s.pop();
    insertBottom(s,temp);
    s.push(temp);
}

void reverseStack(stack<int> s){
    if(!s.empty()){
     return;   
    }
    int temp=s.top();
    s.pop();
    reverseStack(s);
    insertBottom(s,temp);
}



int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // cout<<"stack before revrse"<<endl;
    // // while(!s.empty()){
    // //     cout<<s.top()<<endl;
    // //     s.pop();
    // // }

    // cout<<"stack after reversal"<<endl;

    // reverseStack(s);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    vector<int> a={4,5,2,25,26};
    nextGreater(a);

}