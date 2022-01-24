
#include <iostream>
using namespace std;

int insertSorted(int LA[], int position,int k,int n)
{
	if (position >= n)
	return position;

	LA[n] = k;

	return (n + 1);
}

int deleteElement(int arr[], int n,int key)
{

    int pos = findElement(arr, n, key);
 
    if (pos == - 1)
    {
        cout << "Element not found";
        return n;
    }

    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
 

int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return - 1;
}

int main(){

    int n;
    cin>>n;
	int LA[n] = {12, 16, 20, 40, 50, 70};

	int i, k = 26,position = 6;

	cout << "\n Before Insertion: ";
	for (i = 0; i < n; i++)
		cout << LA[i]<< " ";

	n = insertSorted(LA, position, k, n);

	cout << "\n After Insertion: ";
	for (i = 0; i < position; i++)
		cout << LA[i] << " ";

    n = deleteElement(arr, n, key);
 
    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
        cout << LA[i] << " ";

	return 0;
}


