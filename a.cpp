// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr={2,6,7,8};
	int temp;
	temp=arr[0];
	int p=0;
	int n=arr.size();
	arr[0]=arr[1];
	for(int i=2;i<n;i++){
		p=n-i;
		arr[p]=arr[p+1];
	}

	for(int j:arr){
		cout<<j<<" ";
	}
	return 0;
}
