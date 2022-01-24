#include <bits/stdc++.h>
using namespace std;

int Convert(string s){
    int n=s.length();
    int ans=0;

    for(int i=0;i<n;i++){
        int num=s[i];
        ans+=num*pow(2,n-1-i);
    }

    return ans;
}

int main(){
    string s="101";

    cout<<Convert(s);
}