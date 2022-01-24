#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,3,6,3,8,9,7,8,13,11,3,22,1,3,4,3,5,3,1,1,1,1,1,12,13,12,12,12,1,12,12,12,12,12,12};
    int size=sizeof(a)/sizeof(int);
    1
    int max=0,count=0,freq=0,result=0;
    sort(a);
    for(int i=0;i<size;i++){
        for (int j = 0; j < size; j++){
            if(a[i]=a[j]){
                count++;
                max=count;
            }
        }
        if(max>freq){
            freq=max;
            result=a[i];
        }
                
    }

    cout<<result<<" is repeated maximum time";
    return 0;
}