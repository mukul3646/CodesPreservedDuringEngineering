#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;

	while(t--)
	{
		long int n,k,i,j;
		cin>>n>>k;

		long int a[n],max;

		for(i=0;i<n;i++)
			cin>>a[i];
		
		max=a[n-1];

		for(i=n-1;i>=n-k;i--)
		{
			long int sum=0;

			for(j=i;j>=0;)
			{
				sum=sum+a[j];
				j=j-k;

				if(max<sum)
				max=sum;
			}
			
		}

		/*for(i=x+1;i<n;i++)
		{
			summ[i]=a[i];
		}
		*/
		//long int p=*max_element(summ,summ+n);
		cout<<max<<endl;
	}

}
