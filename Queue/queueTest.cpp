#include<iostream>
#include"queue.h"
using namespace std;

int main(){
    Queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.pop();

    while(!q.empty()){
        cout<<q.getFront()<<" ";
        q.pop();
    }
}