#include <iostream>
using namespace std;
int main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;   
   cout<<"The original array elements are :"<<endl;
   for(i = 0; i<n; i++) {
      cout<<"LA["<<i<<"] = "<<LA[i]<<endl;
   }
   return 0;
}