#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1,k=3;j<=5;j++)
        {
            if(i<k&&i>k)
            {
            printf(" ");
            }
            else
            {
                printf("*");
            }   
             // printf("\n");
              k--;
        }
    }
}