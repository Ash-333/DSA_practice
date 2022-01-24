#include<iostream>
using namespace std;


int pos(int n,int i){
    int m=(1<<i);
    return (n & m)>0?0:1;
}

int main(){
    int n=5;
    cout<<pos(n,2);
}