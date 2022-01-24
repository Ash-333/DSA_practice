#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> stock){
    int n=stock.size();
    vector<int> v(n,0);
    stack<int> s;
    s.push(0);

    for(int i=0;i<n;i++){
        while(!s.empty() && stock[s.top()]<=stock[i]){
            s.pop();
        }

        if(!s.empty()){
            v[i]=i-s.top();
        }
        else{
            v[i]=i+1;
        }
        s.push(i);
    }

    for(int x:v){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> stock={100,80,60,70,60,75,85};
    stockSpan(stock);
}