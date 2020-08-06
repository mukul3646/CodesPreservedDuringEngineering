#include<bits/stdc++.h>
using namespace std;

int digsum(int a)
{
  int sum=0;
  while(a!=0)
  {
    sum=sum+a%10;
    a=a/10;
  }
  return sum; 
}

int main()
{
  int t,arr[100000],n,d,m,p,i,x=1,q=0,a,b,j=1,pp=0,flag=0,dg;
  
  cin>>t;
  while(t--)
  {
  
  cin>>n>>d;
  

  arr[0]=arr[1]=n;
  m=digsum(n);
  dg=digsum(n+d);
  p=n;
  
  
  if(dg==m||m==1)
  {
            p=m;
	    pp++;
	    flag=1;
	   
  }
  while(m<=p&&flag!=1)
  {
     for(i=1;i<=x;i++)
     {
        n = q+(i-1);
 	a = digsum(arr[n]);
	b = arr[n]+d;
	
	arr [j*2] = a;
	arr [j*2 + 1] = b;
	j++;
	
	if(a<m)
	{
	  p=a;
	 
	  break;

	}
       

     }
  

     q=x=x*2;
     pp++;
    
  }
  cout<<p<<" "<<pp<<endl;
  x=1;
  q=0;
  j=1;
  pp=0;
  flag=0;
  }
  return 0;
}
