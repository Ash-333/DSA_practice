#include<iostream>
#include"stack.h"
using namespace std;

int main(){
    Stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1); 
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}