#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
 ll t;
 cin>>t;

 while(t--)
 {
 	ll a,b,c,x,y,min=0;

  	cin>>a>>b>>c>>x>>y;

  	if(a+b+c==x+y)
  	{
  		if(a<b && a<c)
  			min=a;

  		else if(b<a && b<c)
  			min=b;

  		else
  			min=c;


  		if(min<=x && min<=y)
  		cout<<"YES"<<endl;

  		else
  			cout<<"NO"<<endl;
  	}

  	else
  		cout<<"NO"<<endl;

 }


}