#include<iostream>
using namespace std;

int fibbo(int n){
    if(n<2){
        return n;
    }

    return fibbo(n-1)+fibbo(n-2);
}

int main(){
    //0 1 1 2 3 5 8 13
    int n =4;
    cout<<fibbo(8);
    return 0;
}