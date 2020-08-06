#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;

	for(i=0;i<2*n-1;i++)
	{
		int x=n,y=2;
		
		for(j=0;j<n-1;j++)
		{
			cout<<x;
			x--;
		}

		cout<<1;

		for(j=0;j<n-1;j++)
		{
			cout<<y;
			y++;
		}

cout<<endl;
	}

}
