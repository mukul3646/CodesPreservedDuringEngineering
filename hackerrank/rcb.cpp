#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int t;
 cin>>t;

 while(t--)
  {
  	long int x,y,i,ans;
  	cin>>x>>y;

  	if(y>=x)
  		cout<<"0"<<endl;

  	else
  	{
  		ans=x-y;
  		cout<<ans<<endl;
  	}
  
  }

}