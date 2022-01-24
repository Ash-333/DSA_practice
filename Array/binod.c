#include<stdio.h>
int main()
{
    int a[8]={-1,-1,2,3,5};
    int i,j,n;
    int ns=sizeof(a)/sizeof(int);
    printf("Enter the number:");
    scanf("%d",&n);
    int no=0;
    for(i=0;i<ns;i++){
        if(no<n && no<a[i]){
            no=a[i];
        }
    }
    printf("Required number from array = %d",no);
} 