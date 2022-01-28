#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int current=a[i];
        int min=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
}

int main(){
    vector<int> a={5,8,3,4,1,7,-3,12,10001};
    selectionSort(a);

    for(int i:a){
        cout<<i<<" ";
    }
}