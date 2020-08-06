#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];

		for(i=1;i<=n;i++)
			cin>>a[i];

		int index,big,count=1;
		cin>>index;

		big=a[index];

		for(i=1;i<=n;i++)
		{
			if(big>a[i])
				count++;
		}

		cout<<count<<endl;
	}

}