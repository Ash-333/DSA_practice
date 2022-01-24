#include<iostream>
using namespace std;
 
 void subArray(int a[],int n){
     for(int i=0;i<n;i++){
         for(int j=i;j<n;j++){
             cout<<"(";
             for(int k=i;k<=j;k++){
                 cout<<a[k]<<",";
             }
             cout<<")";
         }
         cout<<endl;
     }
 }

 int main(){
     int arr[]={1,2,3,4,5,6};
     int n=sizeof(arr)/sizeof(int);

     subArray(arr,n);

     return 0;
 }