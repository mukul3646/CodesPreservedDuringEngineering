#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,i;
	cin>>n;
	long int arr[n];

	for(i=0;i<n;i++)
		cin>>arr[i];

	sort(arr,arr+n);

	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;


}
