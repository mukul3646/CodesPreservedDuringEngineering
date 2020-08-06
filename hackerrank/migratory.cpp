#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c[6],a[1000000],n,max,i,j;
    
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(j=0;j<n;j++)
    {
        c[a[j]]=c[a[j]]+1;
    }

        
    max=0; 
    for(i=1;i<6;i++)
    {
        if(c[i]>max)
        {
            max=i;
        }
        
    }
    
    cout<<max;
    
    
}