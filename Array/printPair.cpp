#include<iostream>
using namespace std;

void printSubArray(int arr[],int n){
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
                sum+=arr[k];
            }
            m=max(m,sum);
            cout<<endl;
        }
    }
    cout<<m;
}

int main(){
    int a[]={-2,1,2,3,4,5};

    int n=sizeof(a)/sizeof(int);

    printSubArray(a,n);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         //cout<<"("<<a[i]<<","<<a[j]<<"), "; 

    //         for(int k=i;k<=j;k++){
    //             cout<<a[k]<<",";
    //         }   
    //         cout<<endl;
    //     }
    //     //cout<<endl;
    // }
}