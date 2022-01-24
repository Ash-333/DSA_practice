#include<iostream>
using namespace std;

int main(){
    int a[]={23,2,3,4,6,11,223,4,6};
    int size=sizeof(a)/sizeof(int);
    int max=a[0],min=a[0];

    for(int i=0;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }

    cout<<min<<" "<<max;

    return 0;
}