#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,x,i,j;
 cin>>n;
 
 int l=1;
 int r=n*n+1;
 
 for(i=n;i>0;i--)
 {
  for(x=n;x>i;x--)
  	cout<<" ";

  for(j=1;j<=i;j++)
  {
  	cout<<l<<"*";
  	l++;
  }

  for(j=1;j<=i;j++)
  {
  	cout<<r;
  	if(j<i)
  		cout<<"*";

  	r++;
  }
 
 r=r-(i-1)*2-1;
 cout<<endl;
 cout<<endl;
 }

}
