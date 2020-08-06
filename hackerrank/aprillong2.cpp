#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{
		long long int n,i,k=1,sum=0;
		cin>>n;
		string s1;
		cin>>s1;

		char s;
		cin>>s;

		for(i=1;i<=n;i++)
		{
			if(s1[i-1]==s)
			{
				sum=sum+((n-i+1)*k);
				k=0;
			}
		k++;
			
		}

		cout<<sum<<endl;
	}

}