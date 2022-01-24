#include<iostream>
using namespace std;

int main(){
    int a[]={1,6,-2,5,7,3};
    int size=sizeof(a)/sizeof(int);
    int prefix[size];
    prefix[0]=a[0];
    for(int i=1;i<size;i++){
        prefix[i]=a[i]+prefix[i-1];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<prefix[i]<<" ";
    }
    return 0;
    
}