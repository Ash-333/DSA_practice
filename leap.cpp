#include <iostream>
using namespace std;

//Binary Search 
int binarySearch(int arr[],int n){
      int end=n-1,f=8;
   int start=0,ans;

   while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==f){
         return mid;
      }
      else if(f<arr[mid]){
         end=mid-1;
      }
      else{
         start=mid+1;
      }
   }
   return -1;
}

//Reverse an array
void reverseArray(int arr[],int n){
   int s=0,e=n-1;
   while(s<e){
      swap(arr[s],arr[e]);
      s=s+1;
      e=e+1;
   }
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }

}

//Print pairs of an array
void printPair(int arr[],int n){
   cout<<arr[0];
   for(int i=0;i<n;i++){
      int x=arr[i];
      for(int j=i+1;j<n;j++){
         int y=arr[j];
         cout<<arr[i]<<","<<arr[j]<<endl;
      }
      cout<<endl;
   }
}

//Print sub array
void subArary(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
         for(int k=i;k<=j;k++){
            cout<<arr[k]<<",";
         }
         cout<<endl;
      }
   }
}

//Print largest sum of sub array
int largestSubArraySum(int arr[],int n){
   int largestSum=0;
   for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
         int sum=0;
         for(int k=i;k<=j;k++){
            sum+=arr[k];
         }
         largestSum=max(largestSum,sum);
      }
   }
   return largestSum;
}

int main() {

   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(int);

   cout<<largestSubArraySum(arr,n);

   // subArary(arr,n);

   // printPair(arr,n);

   // for(int i=0;i<n;i++){
   //    cout<<arr[i]<<" ";
   // }
   // cout<<endl;
   // reverseArray(arr,n);
   // for(int i=0;i<n;i++){
   //    cout<<arr[i]<<" ";
   // }

   // int s=binarySearch(arr,n);
   // cout<<s;

   return 0;
}
