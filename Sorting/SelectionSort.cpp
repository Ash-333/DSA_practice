#include<iostream>
using namespace std;

void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int m=a[i];
        for(int j=i;j<n;i++){
            if(a[j]<m){
                m=a[j];
            }
        }
        swap(a[i],m);
    }
}

int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(int);
    cout<<"hello world!";
    sort(arr,n);

    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}