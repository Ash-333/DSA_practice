#include<iostream>

using namespace std;

int prefixSum(int a[],int n){
    int prefix[100]={0};
    int largestSum=0;
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=a[i]+prefix[i-1];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            largestSum=max(largestSum,sum);
        }
    }
    return largestSum;
}
 
int main (){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    cout<<prefixSum(arr,n);

    return 0;

}