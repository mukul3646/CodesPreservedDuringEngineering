#include<bits/stdc++.h>
using namespace std;

int main()
{

int t,a[1000],n,k,swap,j,i,min;
cin>>t;

while(t--)
{

 cin>>n>>k;
 for(i=0;i<n;i++)
 	cin>>a[i];

 for(i=0;i<n;i++)
 {
 	min=i;
 	for(j=i+1;j<n;j++)
 	{
 		if(a[min]<a[j])
 		{
 			min=j;
 		}

 	}

 	swap=a[i];
 	a[i]=a[min];
 	a[min]=swap;
 }


for(i=0;i<k;i++)
{
	sum=sum+a[i];
}
















}