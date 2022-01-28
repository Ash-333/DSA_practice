#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v={60,5,9,10,66,78,12};
    bubbleSort(v);

    for(int s:v){
        cout<<s<<" ";
    }
}