#include<bits/stdc++.h>
using namespace std;

int main(){
    //[2,0,1]
    vector<int> arr={2,0,1};

    int high=arr.size()-1;
    int low=0,mid=0;

    while(mid<=high){
        switch (arr[mid]){
            case 0:
                swap(arr[low++],arr[mid++]);    
                break;

            case 1:
                mid++;
                break;
    
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }

    for(int v:arr){
        cout<<v<<" ";
    }

}