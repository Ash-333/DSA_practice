#include<iostream>
using namespace std;

int fac(int n){
    int f=0;
    if(n==1){
       return 1;
    }
    f=n*fac(n-1);
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<fac(n);
}