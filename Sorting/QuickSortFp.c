#include <stdio.h>
#include <stdlib.h>


void quick_sort(int arr[], int l, int r)
 {
 int i = l;
 int j = r;
 int temp = arr[i];


 if( l < r)
 {
 while(i < j)
 {
 while(arr[j] <= temp && i < j)
 {
 j--;
 }
 arr[i] = arr[j];


 while(arr[i] >= temp && i < j)
 {
 i++;
 }
 arr[j] = arr[i];
 }
 arr[i] = temp;


 quick_sort(arr, l, i - 1);
 quick_sort(arr, j + 1, r);
 }
 }


void main()
 {
 int arr[8] = {23, 51, 22, 11, 9, 43, 36, 107};
 quick_sort(arr, 0, 7);


 int i;
 printf("\nSorted Array:\n");
 for (i = 0; i < 8; i++)
 printf("%d \t",arr[i]);
 printf("\n");
 }