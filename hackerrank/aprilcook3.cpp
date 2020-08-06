#include<bits/stdc++.h>
using namespace std;

int main()
{
 long int t;
 cin>>t;

 while(t--)
  {
  		long int a,b,n,x,y,z,i,sum=0,flag=0,count=0;
  		cin>>n>>a>>b>>x>>y>>z; 

  		long int arr[n];

  		for(i=0;i<n;i++)
  			cin>>arr[i];

  		sort(arr,arr+n,greater<int>());

  		long int days=(z-b-1)/y;
  		
  		if(a+(x*days)>=z)
  		cout<<"0"<<endl;

  		else
  		{	
  		long int req=z-(a+(x*days));
  		
  		i=0;
  		while(sum<req)
  		{
  			if(arr[i]==0)
  				{flag++;}

  			if(flag==n)
  				{flag=1; break;}

  			if(arr[i]!=0)
  			{
  			sum=sum+arr[i];
  			arr[i]=arr[i]/2;
  			count++;
  			}

  			i++;

  			if(i==n)
  				i=0;
  		}

  		if(flag==1)
  			cout<<"RIP"<<endl;

  		else
  			cout<<count<<endl;

  }

}
}