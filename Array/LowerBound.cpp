#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> a, int val) {
    
    vector<int> arr;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<val){
            arr.push_back(a[i]);
        }
    }
    return arr.back();
    
}


int main(){
    vector<int> a={-1,-1,2,5};
    cout<<lowerBound(a,4);
}