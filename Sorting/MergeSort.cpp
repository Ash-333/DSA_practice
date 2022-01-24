#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int e){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;

    vector<int> temp;

    while (i<=m and j<=e)
    {
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }

        while(i<=m){
            temp.push_back(arr[i++]);
        }

        while(j<=e){
            temp.push_back(arr[j++]);
        }
        
    }
    int k=0;
    for(int i=s;i<=e;i++){
        arr[i]=temp[k++];
    }

    return;
}

void mergeSort(vector<int> &a, int s, int e){
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    return merge(a,s,e);
}

int main(){
    vector<int> arr={5,6,7,3,1,2,9};

    int n=arr.size();
    int e=n-1,s=0;

    mergeSort(arr,s,e);

for (int i : arr)
{
    cout<<i<<",";
}


    return 0;
}