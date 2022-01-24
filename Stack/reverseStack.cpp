#include<iostream>
#include<stack>
using namespace std;

void insertAtEnd(stack<int> s, int data){
    if (!s.empty()){
        s.push(data);
        return;
    }

    int temp=s.top();
    s.pop();
    insertAtEnd(s,temp);
    s.push(temp);    
}

void reverse(stack<int> s){
    if(!s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insertAtEnd(s,temp);

}

int main(){
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    reverse(s);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}