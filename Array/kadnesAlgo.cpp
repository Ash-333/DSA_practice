#include<iostream>
#include<vector>
using namespace std;
 
 int kadnes(vector<int>& a){
     int cs=0;
     int ls=0;
     int n=a.size();
     for(int i=0;i<n;i++){
         cs=cs+a[i];
         if(cs<0){
             cs=0;
         }
     }
     ls=max(ls,cs);
     return ls;
 }

 int main(){
    vector<int> arr[]={-2,1,-3,4,-1,2,1,-5,4};
    //int n=arr.size();
    cout<<kadnes(arr);
 }