#include<iostream>
#include<vector>
using namespace std;

vector<int> kRotate(vector<int> a,int k){

    vector<int> arr;
    int n=a.size();
    k=k%n;

    for(int i=0;i<n;i++){
        if(i<k){
            arr.push_back(a[n+i-k]);
        }
        else{
            arr.push_back(a[i-k]);
        }
    }
    return arr;
}

int main(){
    vector<int> a={1,3,5,7,9};

    kRotate(a,2);

    // for(int k:a){
    //     cout<<k<<" ";
    // }
}