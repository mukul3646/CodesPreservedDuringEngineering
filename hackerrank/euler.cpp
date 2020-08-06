#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long int t,n,a,k,i,j,digit[1000],num,prod,r,max;
    long int p[1000];
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>k;
        cin>>num;
        r=n;
        
        while(num>0)
        {
            a=num%10;
            digit[r]=a;
            r--;
            num=num/10;     
        }
        
        for(i=1;i<n-k-1;i++)
        {
            for(j=i;j<k+i;j++)
            {
                prod=prod*digit[j];
            }
            p[i]=prod;
            prod=0;
        }
        
        max=p[1];
        
        for(i=2;i<n-k+1;i++)
        {
            if(max<p[i])
                max=p[i];
            
        }
        
       cout<<max;
        
        
    }
    
}