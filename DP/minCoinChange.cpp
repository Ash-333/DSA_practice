#include<iostream>
#include<vector>
using namespace std;

int minNumberOfCoinsForChange(int m,vector<int> d){
    vector<int> dp(m+1,0);
    dp[0]=0;
    for(int i=1;i<=m;i++){
        dp[i]=INT_MAX;
        for(int c:d){
            if(i-c>=0 && dp[i-c]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[m]==INT_MAX?-1:dp[m];
}

int main(){
    vector<int> demon={1,5,7,10};
    cout<<"Minchange is: "<<minNumberOfCoinsForChange(8,demon);

}