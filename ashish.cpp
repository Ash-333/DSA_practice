#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 54
int fibbo(int n){
    // if(n<2){
    //     return n;
    // }

    return fibbo(n-1)+fibbo(n-2);
}

int main(){
    int number;
    cout<<"Enter postion to find: ";
    cin>>number;
    cout<<fibbo(number);
    return 0;    
}