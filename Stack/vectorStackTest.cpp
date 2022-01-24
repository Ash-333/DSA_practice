#include<iostream>
#include"VectorStac.h"
using namespace std;

int main(){

    VectorStack<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);

    v.pop();

    while (!v.empty())
    {
        cout<<v.top();

        v.pop();
    }
    

}