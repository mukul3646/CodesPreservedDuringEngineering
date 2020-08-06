#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p=0,i,k=0;
    cin>>n;
    int a[n],result[n];
    
    for(i=0;i<n;i++)
        cin>>a[i];
    
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+m);
    
    for(i=0;i<m;i++)
    {
        if(b[i]==a[k])
        {
            k++;
            continue;
        }
        else
        {
            result[p]=b[i];
            p++; 
        }
    }

    for (i=0;i<p;i++) 
    { 

       while (i<p-1 && result[i]==result[i+1]) 
          i++; 
  
       
       cout <<result[i]<<" "; 
    } 

}