#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{
		long int k,n,m,i,j,x,y,count=0; 
		cin>>n>>m>>k;
		long int a[1000][1000]={0};		

		for(i=0;i<k;i++)
		{
			cin>>x>>y;
			a[x][y]=1;
		}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			
			if(a[i][j]==0)	
			{}

			else
			{
				if(a[i+1][j]!=1)
					count++;
				if(a[i-1][j]!=1)
					count++;
				if(a[i][j+1]!=1)
					count++;
				if(a[i][j-1]!=1)
					count++;
			}
		
			
		}

	}
		cout<<count<<endl;

	}


}