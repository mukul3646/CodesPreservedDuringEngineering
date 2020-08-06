#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int t;
 cin>>t;

 while(t--)
  {
  	long int n,power,i;
  	cin>>n;

  	if(n%2==0)
  		power=n-n/2;

  	else
  		power=n-(n/2+1);

  	cout<<1<<" ";

  	cout<<1;

  	for(i=0;i<power;i++)
  		cout<<"0";

  	cout<<endl;
  }

}