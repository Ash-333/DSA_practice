#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current=v[i];
        int prev=i-1;

        while(prev>=0 && v[prev]>current){
            v[prev+1]=v[prev];
            prev=prev-1;
        }
        v[prev+1]=current;
    }
}

int main(){
    vector<int> v={10,1,-8,9,6,56};
    insertionSort(v);
    for(int i:v){
        cout<<i<<" ";
    }
}