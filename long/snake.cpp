#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		long int n,q;
		cin>>n>>q;
		long int L[n],i;

		for(i=0;i<n;i++)
			cin>>L[i];

			sort(L,L+n);

			while(q--)
			{
				int que;
				cin>>que;

				int x=que-0.5;

				int left=0,right=n-1,middle;
				middle=(left+right+1)/2;

				while(left<right)
				{
					
					if(L[middle]>que)
					{
						right=middle-1;
					}

					else if(L[middle]<que)
					{
						left=middle+1;
					}

				}

				k=L[left];
				count=(n-1)-left+1;

				l=

			}


	}

}