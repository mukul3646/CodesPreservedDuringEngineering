#include<stdio.h>

int main()
{

long long int t,m,n,i,j,d=0,k,min=50000;
long long int l[100000],r[100000],p[100000],w[100000],ti[100000];

scanf("%lli",&t);

while(t>0)
{

 
scanf("%lli%lli",&n,&m);

for(i=0;i<n;i++)
{
	scanf("%lli",&l[i]);
	scanf("%lli",&r[i]);
}

for(i=0;i<m;i++)
{
	scanf("%lli",&p[i]);

}



for(j=0;j<m;j++)
{

	for(i=0;i<n;i++)
	{

	 if(p[j]>=l[i] && p[j]<r[i])
	 {
	 	w[j]=0;
	 	break;
	 }

	 else if(p[j]<l[i] && l[i]<min )
	 {
	 	 w[j]=l[i]-p[j];
	 	 min=l[i];
	 }

	 else if(p[j]>l[i] && p[j]>r[i] && l[i]>min)
	 {
	 	w[j]=-1;
	 }


	 }
	

}

for(i=0;i<m;i++)
printf("%lli\n",w[i]);

t--;
}



}