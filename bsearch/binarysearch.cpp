#include<bits/stdc++.h>
#define lli long long
using namespace std;

void searchnsum(lli a[],lli b, lli left, lli right)
{       
    
        int flag=0,middle;
        
        while(left<=right)
        {
        middle=(left)+(right-left)/2;
        
        if(a[middle]==b)
        {flag=1; break;}
    
        else if(a[middle]>b)
        right=middle-1;
        
        else if(a[middle]<b)
        left=middle+1;
        
        }
        

        lli i=0,sum=0;
        
         while(i<=middle)
            { 
                sum=sum+a[i];
                i++;
                
            }
            
        cout<<middle+1<<" "<<sum<<endl;

}

int main()
{
    lli n,q;
    cin>>n;
    lli a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cin>>q;
    while(q--)
    {
        lli b;
        cin>>b;        
        
        searchnsum(a,b,0,n-1);
        
    }
    
}
