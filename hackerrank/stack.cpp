#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,i,j,s=0,flag=0;
		cin>>n;
		int arr[n];
		
		for(i=0;i<n;i++)
		cin>>arr[i];

		for(i=0;i<n;i++)
		{
			if(s>0 && arr[i]==0)
			{
				s--;

			}

			else if(arr[i]==0 && s<=0)
			{
				flag=1;
				break;
			}

			else if(arr[i]==1)
			{
				s++;
			}

		}

		if(flag==1)
			cout<<"Invalid"<<endl;
		else
			cout<<"Valid"<<endl;

	}

}