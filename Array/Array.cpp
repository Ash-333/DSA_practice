#include <iostream>
using namespace std;

int main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5;
   int i, j;
   
   cout<<"The original array elements are :\n";
	
   for(i = 0; i<n; i++) {
      cout<<"LA["<<i<<"]" <<"=" << LA[i]<<endl;
   }

   j = k;
	
   while( j < n) {
      LA[j-1] = LA[j];
      j = j + 1;
   }
	
   n = n -1;
   
   cout<<"The array elements after deletion :\n";
	
   for(i = 0; i<n; i++) {
      cout<<"LA["<<i<<"]" <<"=" << LA[i]<<endl;
   }
   return 0;
}