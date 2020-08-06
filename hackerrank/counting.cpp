    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n,i,j,max=0,sum=0;
    	cin>>n;
    	int a[100]={0};
	
    	for(i=1;i<=n;i++)
    		cin>>a[i];
    
    //for(i=1;i<=n;i++)
    //	cout<<a[i]<<" ";

    //cout<<endl;

	int p=*max_element(a,a+100);
	//cout<<p<<endl;

	int f[p+1]={0};
	
    	for(i=1;i<=p;i++)
     		f[a[i]]++;	
    	
	//for(i=1;i<p;i++)
    //		cout<<f[i]<<endl;
    	
    	for(i=1;i<p;i++)
    	{
     
    	sum=f[i]+f[i+1];
    		if(sum>max)
    		{
    			max=f[i]+f[i+1];
    		}
    	}
    	cout<<max;
    }
