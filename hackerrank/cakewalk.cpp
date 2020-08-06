#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int count=0,i,j,arr[10][10];

		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				cin>>arr[i][j];

				if(arr[i][j]<=30)
				{
					count++;
				}

			}

		}

		if(count>=60)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;


	}


}