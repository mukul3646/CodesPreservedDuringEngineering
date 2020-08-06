#include<bits/stdc++.h>
using namespace std;


int main()
{
	/*long int t;
	cin>>t;
	getchar();
	while(t--)
	{*/
		long int i,n,flag=0;
		cin>>n;
		long int a[n];

		for(i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);

		long int max=a[n-1];

		for(i=n-2;i>=0;i--)
		{
			if(a[i]!=max)
				{
					max=a[i];
					flag=1;
					break;
				}	
		}

		if (flag==1)
		cout<<max<<endl;		
		
		else
			cout<<"0"<<endl;
	}

//}