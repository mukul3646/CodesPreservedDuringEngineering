#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	
	while(t--)
	{
	    long int n,k,i,count=1,max=0,num;
	    cin>>n>>k;
	    long int a[n],b[100000]={0};
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[a[i]]++;
	    
	        if(a[i]>max)
	        max=a[i];
	    }
	    
	    //cout<<max<<endl;

	 for(i=max-1;i>=0;i--)
	 {
	     if(b[i]==1)
	     {
	         count++;
	         if(count==k)
	         {
	             break;
	         }
	     }
	 }
	    
	    cout<<i<<endl;
	}
	return 0;
}
