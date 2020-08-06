#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		float m;
		cin>>n>>m;

		if(n>m || n%5!=0)
			cout << fixed << setprecision(2)<<m;

		else
		{
			m=m-n-0.5;
			cout << fixed << setprecision(2)<<m;
		}

	}