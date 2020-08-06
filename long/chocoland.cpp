#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	getchar();
	while(t--)
	{

		long int n,k,s,i,div,res;
		cin>>n>>k>>s;
		int weeks=s/7;

		//int total=k*s;
		int days=s/7;
		int ctotal=s-days;
		
		if((ctotal*n)<k*s)
			cout<<"-1"<<endl;

		else
		{
			int l=(ctotal*n)-(k*s);
			l=l/n;
			l=ctotal-l;

			cout<<l<<endl;
		}


	}

}

/*

Input:
2
16 2 10
50 48 7

Output:
2
-1



*/