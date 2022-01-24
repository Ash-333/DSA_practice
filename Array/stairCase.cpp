#include<iostream>
using namespace std;

pair<int,int> stairCase(int a[][4],int m,int n,int key){
    if(key<a[0][0] and key>a[n-1][m-1]){
        return {-1,-1};
    }
    int i=0,j=m-1;
    while(i<=n-1 and j>0){
        if(a[i][j]==key){
            return {i,j};
        }
        else if(a[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};
}

int main(){
    int mat[][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    
    int m=4,n=4;

    pair<int,int> cord=stairCase(mat,m,n,18);
    cout<<cord.first<<","<<cord.second;
}