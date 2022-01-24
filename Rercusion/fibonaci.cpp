#include<iostream>
using namespace std;

int fibb(int n){
    if(n==0 or n==1){
        return n;
    }
    int a=fibb(n-1);
    int b=fibb(n-2);
    return a+b;
}

int main(){
    int n;
    cin>>n;
    cout<<fibb(n);
}