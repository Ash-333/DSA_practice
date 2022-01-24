#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> a,int val){
    int answer=-1;
    int i=0;
    int n=a.size()-1;

    while(i<=n){
        int mid=(i+n)/2;

        if(a[mid]>val)
        {
            n=mid-1;
        }
        else{
            answer=a[mid];
            i=mid+1;
        }
    }

    return answer;
}

int main(){
    vector<int> a={-1,-1,2,3,5};
    int n;
    cin>>n;
    cout<<lowerBound(a,n);
}