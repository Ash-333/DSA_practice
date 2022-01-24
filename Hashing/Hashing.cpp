#include<iostream>
#include"hashTable.h"
using namespace std;

int main(){
    HashTable<int> h;

    h.insert("Apple",2);
    h.insert("Mango",6);
    h.insert("Orange",3);
    h.insert("Guava",9);
    h.insert("Grape",8);
    h.insert("Banana",4);

    h["coconut"]=50;
    cout<<"coconut="<<h["coconut"];
}