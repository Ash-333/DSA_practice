#include<bits/stdc++.h>
using namespace std;


pair<int,int> closestSum(vector<int> a,int val){
    vector<int> arr;
    int n=a.size()-1,i=0,res_l,res_r,diff=INT_MAX;

    while(n>i){
        if(abs(a[i]+a[n]-val)<diff){
            res_l=i;
            res_r=n;
            diff=abs(a[i]+a[n]-val);
        }
        if((a[i]+a[n])>val){
            n--;
        }
        else
            i++;
    }

    return {a[res_l],a[res_r]};
    
}
int main(){
    vector<int> a={10,22,28,29,30,40};
    int n=a.size();
    pair<int,int> s=closestSum(a,54);
    cout<<s.first<<","<<s.second;
    //cout<<endl<<INT_MAX;
}