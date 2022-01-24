#include<iostream>
#include<stack>
#include<vector>
#include<utility>
using namespace std;

void spanStock(vector<int> price){
    
    int n=price.size();
    vector<int> span(n,1);
    stack<int> s;
    s.push(0);
    //span.push_back(1);
    for(int i=0;i<n;i++){
        while(!s.empty() && price[s.top()]<=price[i]){
            s.pop();
        }
        if(!s.empty()){
            span[i]=i-s.top();
        }
        else{
            span[i]=i+1;
        }
        s.push(i);
    }

    for(int x:span){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> a={100,80,60,70,60,75,85};
    spanStock(a);
}