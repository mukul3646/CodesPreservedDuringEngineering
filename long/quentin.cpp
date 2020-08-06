#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;

	while(t--)
	{
		long int i,n,num=0;
		cin>>n;
		long int a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		if(is_sorted(a,a+n))
		{
			cout<<"NO"<<endl;
		}

		else
		{

			num=accumulate(a,a+n,num);
			long int var=(n*(n+1))/2;

			if(var==num)
			cout<<"YES"<<endl;

			else
			cout<<"NO"<<endl; 
		}


	}

}