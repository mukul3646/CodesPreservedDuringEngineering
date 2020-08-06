#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

ll int n,q,count=0,i,j,k=0,m;
cin>>n>>q;
ll int x[n],y[n],r[n],xa,ya;
ll int que[q];
double max,min,z,qu;

for(i=0;i<n;i++)
	cin>>x[i]>>y[i]>>r[i];

m=q;
while(q--)
{
	cin>>qu;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{

			if(x[i]==x[j] && y[i]==y[j] && r[i]==r[j])
				continue;
			
			else if(x[i]==x[j] && y[i]==y[j])
			{
				if(r[i]>r[j])
				{
					z=r[i]-r[j];
					min=z;
					max=min+r[j]+r[j];
				}
				else
				{
					z=r[j]-r[i];
					min=z;
					max=min+r[i]+r[i];
				}

				if(max>=qu && qu>=min)
					count++;

			}

			else
		    {
			if(x[i]>x[j])
				xa=x[i]-x[j];
			else
				xa=x[j]-x[i];


			if(y[i]>y[j])
				ya=y[i]-y[j];
			else
				ya=y[j]-y[i];

			z=sqrt(xa*xa+ya*ya);


			max=r[i]+r[j]+z;
			min=z-(r[i]+r[j]);

			if(min<0)
				min=0;


			if(qu>=min && qu<=max)
				count++;
		   }

		}

	}

	que[k]=count;
	count=0;
	k++;

}

for(i=0;i<m;i++)
cout<<que[i]<<endl;


}