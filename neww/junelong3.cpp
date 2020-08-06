    #include<bits/stdc++.h>
    using namespace std;
     
    long int funk(long int x,long int y)
    {
    	long int a[10]={0},count=0,i;
     
        if(x==0)
        {
            a[0]++;
        }

        if(y==0)
        {
            a[0]++;
        }

    	while(x>0)
    	{
    		a[x%10]++;
    		x=x/10;
    	}
     
    	while(y>0)
    	{
    		a[y%10]++;
    		y=y/10;
    	}	
     
    for(i=0;i<10;i++)
    {
    	if(a[i]!=0)
    	{
    	 count++;
    	}	
     
    }
     
    return count;
    }
    int main()
    {
    	long int t;
    	cin>>t;
     
    	while(t--)
    	{
    	 long int k,n,count=0,i;	
    	 cin>>k;	
    	 n=pow(10,k);	
     
    	 for(i=0;i<n;i++)
    	 	{
    	 		long int x=i;
    	 		long int y=n-i-1;

    	 		long int z=funk(x,y);
                //cout<<z<<endl;

    	 		if(z==2)
    	 		count++;
     
    		 }
     
    	cout<<count<<endl;	
     
    	}
     
    	return 0;
    }