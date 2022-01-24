#include<iostream>
using namespace std;

int Kadane_Algorithms(int arr[], int n)
{
    int cs = 0, ls = 0;
    int max_element = (-2147483648);
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ls = max(ls, cs);
        if (arr[i] >= 0)
        {
            check = 0;
        }
 
        if (arr[i] > max_element)
            max_element = arr[i];
    }
 
    if (check)
    {
        cout << max_element << endl;
    }
    else
    {
        cout << ls << endl;
    }
 
    // Time Complexity : O(N).
}

int main(){
    int 
}