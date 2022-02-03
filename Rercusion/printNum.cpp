#include<iostream>
using namespace std;

void printDesending(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    printDesending(n-1);
}

void printAscending(int n){
    if(n==0){
        return;
    }
    printAscending(n-1);
    cout<<n<<" ";
}

int  main(){
    int n=10;
    printDesending(n);
    cout<<endl;
    printAscending(n);
}