#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{

		int n,k,s,div,days;
		int n1,k1;
		float result;
		cin>>n>>k>>s;
		days=s;
		div=s/7;

		if(div>0)
		days=days-div;
		
		else
			days--;

		n1=n*days;
		k1=k*s;

		if(k1>n1)
			cout<<"-1"<<endl;

		else
		{
			k=k*s;
			result=ceil((float)k/n);
			cout<<result<<endl;
		}

	}


}

