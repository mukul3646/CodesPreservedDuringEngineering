#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i;
	cin>>n>>k;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);

	int j=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			a[j++]=a[i];
		}

		a[j++]=a[n-1];
	}


	int l=0,r=j-1,flag=0;
	middle=(l+r+1)/2;
	
	while(l<r)
	{
		if(a[middle]==k)
		{
			index=middle;
			flag=1;
			break;
		}

		else if(a[middle]<k)
		{
			l=middle+1;
		}

		else if(a[middle]>k)
		{
			r=middle-1;
		}

	}

	if(flag==1)
		cout<<index<<endl;
	else
		cout<<l<<endl;


}