#include<bits/stdc++.h>
using namespace std;

int main()
{

int t,n,i,j,flag=0,swap,max,k=0,to;
int a[1000],ans[1000];
cin>>t;

to=t;
while(t--)
{

	cin>>n;

	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[max])
			{
				max=j;
				flag=1;
			}

		}

		swap=a[i];
		a[i]=a[max];
		a[max]=swap;

	}

	if(flag==0)
	{
		flag=2;
	}

	else
	{
	flag=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]!=1)
			{ flag=1; break;}

	}
	}

	if(flag==0)
		ans[k]=0;

	else if(flag==1 || flag==2)
		ans[k]=1;

	flag=0;
	k++;
}

for(i=0;i<to;i++)
{
	if(ans[i]==0)
		cout<<"yes"<<endl;
	else if(ans[i]==1)
		cout<<"no"<<endl;

}


}
