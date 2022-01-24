// A B C
// D E F
// G H I

#include<iostream>
using namespace std;

int main(){
    int row,k=1;
    cout<<"Enter number of row: ";
    cin>>row;

    for(int i=1;i<=row;i++){
        for (int j = 1; j <= 3; j++){
            char a=64+k;
            cout<<a<<" ";
            k++;
        }

        cout<<endl;    
    }
}