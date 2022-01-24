#include<iostream>
using namespace std;

int printLargestSum(int a[],int n){
    int largestSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            largestSum=max(largestSum,sum);
        }
    }
    return largestSum;
}

int main(){
    int a[]={1,2,3,4,5,6};
    int size=sizeof(a)/sizeof(int);
    
    cout<<printLargestSum(a,size);

    return 0;
}