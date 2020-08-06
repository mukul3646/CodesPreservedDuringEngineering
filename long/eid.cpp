#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		ll n,i,min;
		
		cin>>n;

		ll a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);

		min=a[1]-a[0];

		for(i=1;i<n-1;i++)
		{

			if(a[i+1]-a[i]<min)
			{
				min=a[i+1]-a[i];
			}

		}

		cout<<min<<endl;

	}




}