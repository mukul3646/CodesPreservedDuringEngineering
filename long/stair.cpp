#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{

		int n,k,i,r=0;
		int count=0;
		cin>>n>>k;
		int a[n],b[100000];

		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]<=k)
			{
				b[r]=a[i];
				r++;
				continue;
			}

			else
			{
				b[r]=a[i];
				
				while(a[i+1]-b[r]<=k)
				{	

				r++;
				count++;
				b[r]=b[r]+k;

				}

			}

	}
	
	cout<<count<<endl;

}
}
