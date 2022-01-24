#include <iostream>
using namespace std;
int main()
{
   int LA[] = {2,4,6,8,9};
   int i, n = 5;

   cout<<"The array elements are:\n";

   for(i = 0; i < n; i++)
   {
      cout<<"LA["<<i<<"]" <<"=" << LA[i]<<endl;
   }
   return 0;
}