#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--)
	{
	    long int x,n,i;
	    cin>>n;
	    long int a[3];
	    for(i=0;i<n;i++)
	    {cin>>x; a[x]++;}
	    
	    x=a[0];
	    for(i=0;i<x;i++)
	    cout<<"0"<<" ";
	    
	    x=a[1];
	    for(i=0;i<x;i++)
	    cout<<"1"<<" ";
	    
	    x=a[2];
	    for(i=0;i<x;i++)
	    cout<<"2"<<" ";
	    
	    cout<<endl;
	}
	return 0;
}
