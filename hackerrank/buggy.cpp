#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int a,b;
		cin>>a>>b;

		int x,y,z,p=1,op=0;

		while(a!=0 || b!=0)
		{
			x=a%10;
			y=b%10;
			z=(x+y)%10;

			op=op+z*p;
			p=p*10;

			a=a/10;
			b=b/10;

		}

		cout<<op<<endl;

	}

	return 0;
}
