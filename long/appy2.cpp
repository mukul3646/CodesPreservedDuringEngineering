#include<bits/stdc++.h>
#define  ll long long

using namespace std;

void Merge(ll int a[],ll int p,ll int q,ll int r,ll int b[])
{
 ll int i,j,k,L[15000],R[15000],swap,S[15000],T[15000];
 ll int n1,n2;
 n1=q-p+1;
 n2=r-q;
 
 for(i=0;i<n1;i++)
 {
  L[i]=a[p+i];
  S[i]=b[p+i];
 }
 for(i=0;i<n2;i++)
 {
  R[i]=a[q+i+1];
  T[i]=b[q+i+1];
 }
L[n1]=32000;
R[n2]=32000;
i=0;
j=0;
 for(k=p;k<=r;k++)
 {
  if(L[i]<R[j])
  {
   a[k]=L[i];
   b[k]=S[i];
  
   i=i+1;
  }
  else
  {
   a[k]=R[j];
   b[k]=T[j];
  
   j=j+1;
  }
 }
}

void Merge_sort(ll int a[],ll int p,ll int r,ll b[])
{
 ll int q;
 if(p<r)
 {
 q=(p+r)/2;

 Merge_sort(a,p,q,b);
 Merge_sort(a,q+1,r,b);
 Merge(a,p,q,r,b);
 }
}

int main()
{

 ll int n,m,i,left,right,x,sum=0,center,value,max;
 cin>>n>>m;

 ll int a[n],b[n],c[n];

 for(i=0;i<n;i++)
 {
    cin>>a[i];
    sum=sum+a[i];
 }

 for(i=0;i<n;i++)
 {
  cin>>b[i];
  c[i]=a[i]*b[i];
 }
 max=c[0]; 
 if(m==0)
 { 
   for(i=1;i<n;i++)
   {
     if(c[i]>max)
    	max=c[i];
   }
    cout<<max<<endl;
 }
 else
 {
  Merge_sort(c,0,n-1,b);
  left=c[0];
  right=c[n-1];
  x=0;
  if(m<sum)
  {
    while(left<=right)
    {
	center=(left+right)/2;
    	value=m;
    	for(i=n-1;i>=0;i--)
    	{
    	  if(c[i]<=center)
    	  break;			
    	  else
          {
 	     if((c[i]-center)%b[i]==0)
           	value=value-(c[i]-center)/(b[i]);		
    		else
    		    value=value-(c[i]-center)/(b[i])-1;
          }
        }			
        if(value<0)
    	  left=center+1;
        else
    	  right=center-1;
    	
 	if(left>right)
   	 {
    	   if(value<0)
       	    x=center+1;
            else
    	     x=center;
    	 }
     }
  cout<<x<<endl;	
  }
  else cout<<"0"<<endl;
 }
 return 0;
}
