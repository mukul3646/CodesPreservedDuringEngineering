#include <bits/stdc++.h>
using namespace std;

long long int r[1000000],ind1[1000000],ind2[1000000];

int main()
{
   long long int n,k=0,i,j;
    long long int *p;
    cin >> n;
    long long int a[n];
    
    for(i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            r[k]=a[j]-a[i];
            ind1[k]=i;
            ind2[k]=j;
            k++;
        }
        
    }
    
    p=min_element(r,r+k);
    
    for(i=0;i<k;i++)
    {
        if(r[i]==*p)
        {
            cout<<a[ind1[i]]<<" "<<a[ind2[i]]<<" ";
        }
        
    }
    
   
}
