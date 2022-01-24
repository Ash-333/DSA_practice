#include<iostream>
using namespace std;

void print(int n){
    int sum;
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<endl;
    
}

int main(){
    int number=100;
    print(number);
    return 0;
}



