#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 ll t;
 cin>>t;

 while(t--)
 {
 	ll n;
 	cin>>n;

 	ll p[n],q[n],d[n],i;
 	double dis[n],fdis[n],sk[n],sum[n],som=0;

 	for(i=0;i<n;i++)
 	{
 		cin>>p[i]>>q[i]>>d[i];
 		dis[i]=(p[i]*(d[i]/100))+p[i];

 		fdis[i]=dis[i]-(dis[i]*d[i]/100);
 		sk[i]=p[i]-fdis[i];

 	}

 	for(i=0;i<n;i++)
 	{
 		sum[i]=sk[i]*q[i];
 		som=som+sum[i];
 	}

cout<<som<<endl;

 }

}
