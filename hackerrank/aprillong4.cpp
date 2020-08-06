#include<bits/stdc++.h>
using namespace std;

long int Partition(long int [],long int ,long int,long int,long int []);

void Quick_sort(long int a[],long int p,long int r,long int n,long int b[])

{
long int q;
if(p<r)

 {
  q=Partition(a,p,r,n,b);
  Quick_sort(a,p,q-1,n,b);
  Quick_sort(a,q+1,r,n,b); 
   
 }

}

long int Partition(long int a[],long int p,long int r,long int n,long int b[])
{
long int swap,x,i,j,k=0;
x=a[r];
i=p-1;

for(j=p;j<=r-1;j++)
 {
 
 if (a[j]<=x)
 {
  i=i+1;
  swap= a[i];
  a[i]=a[j];
  a[j]=swap;

  swap= b[i];
  b[i]=b[j];
  b[j]=swap;

 }
 
 }
 
  swap=a[i+1];
  a[i+1]=a[r];
  a[r]=swap;

  swap=b[i+1];
  b[i+1]=b[r];
  b[r]=swap;

for(k=0;k<n;k++)

return (i+1);
}


void removeChild(long int b[],long int c[],long int neg[],long int index[],long int value,long int n,long int k)
{

long int var[k]={0},i,p=1,j;

 
 for(i=1;i<=n;i++)
 {
 	if(b[i]==value)
 	{
 		var[p]=c[i];
 		p++;
 	}
 }

for(i=1;i<p;i++)
{
	for(j=1;j<=k;j++)
	{
		if(index[j]==var[i])
		{
			neg[j]=0;
			break;
		}
	}

}

}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,x,i,total=0,y,step=0,initial,k=1,max=-2147483648,p=0,m=0;
		cin>>n>>x;
		long int a[1000]={0},b[1000]={0},c[1000]={0},childsum[1000]={0};

		for(i=1;i<=n;i++)
			{
				cin>>a[i];
				//d[i]=a[i];
			}
		for(i=1;i<=n-1;i++)
			cin>>b[i]>>c[i];

		for(i=1;i<=n;i++)
			childsum[i]=a[i];

		for(i=n;i>0;i--)
			total=total+childsum[i];

		for(i=n;i>0;i--)
			{
				childsum[b[i]]=childsum[b[i]]+a[c[i]];
				a[b[i]]=a[b[i]]+a[c[i]];
			}

	
		//cout<<endl;

		for(i=1;i<=n;i++)
		{
			if(childsum[i]<0)
			{
				//neg[k]=childsum[i];
				//index[k]=i;
				k++;
			}

		}	

		long int neg[k]={0},index[k]={0};

		k=1;

		for(i=2;i<=n;i++)
		{
			if(childsum[i]<0)
			{
				neg[k]=childsum[i];
				index[k]=i;
				k++;
			}

		}

		

		//for(i=1;i<k;i++)
		//cout<<neg[i]<<" ";
		Quick_sort(neg,1,k,k-1,index);

//	for(i=1;i<k;i++)
//		cout<<neg[i]<<" ";	

//	cout<<endl;

//	for(i=1;i<k;i++)
//		cout<<index[i]<<" ";	

//	cout<<endl;

	for(i=1;i<k;i++)
	{
		if(neg[i]==0)
			continue;

		else 
		{
			p++;

			if(total-(m+neg[i])-(x*p)>max)
			{
				max=total-(m+neg[i])-(x*p);
				m=m+neg[i];
				cout<<neg[i]<<" "<<m<<" "<<index[i]<<" "<<max<<" "<<endl;
				removeChild(b,c,neg,index,index[i],n,k);
			}

		}

	}

	cout<<endl<<max<<endl;	

	}

}