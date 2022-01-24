#include<iostream>
using namespace std;

int fOc(int a[],int n,int k){
    if(n==0){
        return -1;
    }

    if(a[0]==k){
        return 0;
    }

    int subIndex=fOc(a+1,n-1,k);
    if(subIndex!=-1){
        return subIndex+1;
    }
    return -1;
}

int main(){
    int arr[]={2,3,46,7,8,5,9};
    int n=sizeof(arr)/sizeof(int);
    int k=8;

    cout<<fOc(arr,n,k);
}