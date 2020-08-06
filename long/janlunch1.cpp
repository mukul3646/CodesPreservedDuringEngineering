#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int n,count=0,i;
	cin>>n;
	getchar();
	string str;
	getline(cin,str);

	for(i=0;i<n;i++)
	{
		if(n==1)
			count=1;

		else if(n==2)
			count=0;

		else 
		{

		if(i==0 && str[i]=='0')
		{
			if(str[i+1]=='0')
			{
				str[i]=1;
				count++;
			}
		}

		else if(i==n-1 && str[i]=='0')
		{
			if(str[i-1]=='0')
			{
				str[i]=1;
				count++;
			}

		}

		else if(str[i]=='0')
		{

			if(str[i+1]=='0' && str[i-1]=='0')
			{
				str[i]=1;
				count++;
			}

		}

	}
}

cout<<count<<endl;

}

}