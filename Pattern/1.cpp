// 1
// 21
// 321
// 4321
// 54321

#include<iostream>
using namespace std;

int main(){
    int row;
    
    cout<<"Enter a number";
    cin>>row;

    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
             cout<<j;
        }
        cout<<endl;
    }
    return 0;
}