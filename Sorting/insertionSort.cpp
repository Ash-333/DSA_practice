#include<iostream>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
         int current=a[i];
         int prev=i-1;
         while(prev>=0 and a[prev]>current){
             a[prev+1]=a[prev];
             prev=prev-1;
         } 
         a[prev+1]=current;
    }
}

int main(){
    int a[]={2,4,8,6,3,12,7,1,9};
    int n=sizeof(a)/sizeof(int);
    insertionSort(a,n);

    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<4%5;
    cout<<3%5;
}