#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V,i;
    cin>>V;
    
    int n;
    cin>>n;
    
    int a[n];
  
    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==V)
           { cout<<i;
        
        break;}
    }
} 
    
