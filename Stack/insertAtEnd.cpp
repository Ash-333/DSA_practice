#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(temp);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,temp);
}

int main(){
    stack<int> v;

    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);

    reverse(v);
    while(!v.empty()){
        cout<<v.top();
        v.pop();
    }


}