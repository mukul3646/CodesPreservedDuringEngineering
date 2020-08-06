#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;


while(t--)
{
	int n,k,sum=0,i,j,max;
	cin>>n>>k;
	int a[n],sol[n];

	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}

	for(i=1;i<=n-k+1;i++)
	{
		for(j=i;j<i+k;j++)
		{
			sum=sum+a[j];
		}

	sol[i]=sum;
	sum=0;

	}

	max=sol[1];

	for(i=2;i<=n-k+1;i++)
	{
		if(sol[i]>max)
			max=sol[i];
	}

	cout<<max<<endl;

}

}
