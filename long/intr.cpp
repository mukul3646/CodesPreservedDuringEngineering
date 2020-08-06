#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main()
{
	lli t;
	cin>>t;

	while(t--)
	{
		lli n,k,min=0,i,j,sum=0,count=0;
		cin>>n>>k;
		lli a[n],b[n];

		for(i=0;i<n;i++)
			{
				cin>>a[i];
				b[i]=a[i];	
			}

		sort(b,b+n);

		for(i=0;i<k;i++)
			min=min+b[i];

		for(i=0;i<n-k+1;i++)
		{
			for(j=i;j<k+i;j++)
			{
				sum=sum+b[j];

			}

			if(sum==min)
				count++;
		
		sum=0;
		}

		cout<<count<<endl;
	}

}