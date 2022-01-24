#include<iostream>
#include"heap.h"
using namespace std;

int main(){
    Heap h;

    h.push(10);
    h.push(12);
    h.push(5);
    h.push(15);
    h.push(25);
    h.push(20);
    h.pop();
    h.print();
}