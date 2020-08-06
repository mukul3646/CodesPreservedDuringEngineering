#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int t;
 cin>>t;
 getchar();
 
 while(t--)
 {
  string s;
  long int a[26]={0},i,flag=0;
  
  getline(cin,s);	
  long int n=s.length();

  for(i=0;i<n;i++)
   a[s[i]-'a']++;
 
   for(i=0;i<26;i++)
    cout<<a[i]<<" ";
 
    cout<<endl;
 
  if(n%2==0)
  {
    for(i=0;i<26;i++)
    {
      if(a[i]==0)
	  {	  }	
 
      else if(a[i]%2!=0)
	  {
	  	flag=1;
	  	break;
	  }	
	}
 
  }
 
 
 
  else if(n%2!=0)
  {
    for(i=0;i<26;i++)
  	{
		if(a[i]==0)	  
	    {}
 
	    else if(a[i]%2!=0 && flag<1)
	    {
	    	flag++;
		}
 
		else if(a[i]%2==0 && flag==1)
		{
			flag=2;
			break;
		}
	}
 
   }
 
  if(flag==1 || flag==2)
  cout<<"!DPS"<<endl;
 
  else
  cout<<"DPS"<<endl;
 
 }
 
 return 0;
}
