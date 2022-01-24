#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=1;i<n-2;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){

    int a[]={7, 1, 4, 12, 67, 33,45};
    int n=sizeof(a)/sizeof(int);
    bubbleSort(a,n);
    cout<<"Array before sorting: 7 1 4 12 67 33 45 "<<endl;
    cout<<"Array after sorting: ";
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}

