#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int num;
		cin>>num;

		int sum=0,rev,a;
		
		while(num>0)
		{
		a=num%10;
		sum=sum+a;
		num=num/10;
		}

		cout<<sum<<endl;

	}


}
