#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }

}