#include<iostream>
using namespace std;

void incNum(int n){
    if(n==0){
        return;
    }
    incNum(n-1);
    cout<<n<<",";
}

void decNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<",";
    decNum(n-1);
}
int main(){
    int n;
    cin>>n;

    incNum(n);
    cout<<endl;
    decNum(n);
}