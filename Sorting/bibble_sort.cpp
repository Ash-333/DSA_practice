#include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<n<<"Number of element in function"<<endl;
}

int main(){
    int arr[]={5,4,3,2,1,-11,6,0,21,9,23};
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<"number of function in main function"<<endl;

    bubbleSort(arr,size);

    for(int x=0;x<size;x++){
        cout<<arr[x]<<" ";
    }
    return 0;
}