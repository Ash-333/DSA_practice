#include<iostream>
using namespace std;

bool isSorted(int a[],int n){
    if(n==1){
        return true;
    }

    if(a[0]<a[1] and isSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
    int arr[]={1,2,4,5,6,7,8,9,11,13,10,19};
    int size=sizeof(arr)/sizeof(int);

    cout<<isSorted(arr,size);
}