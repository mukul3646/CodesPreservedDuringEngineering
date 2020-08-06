#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],c,d=0;

		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c=a[i]-1;
			d=d+c;
		}
		
		d++;
		cout<<d<<endl;
	}
}