#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int h[n],i,a;
    int *p;
    
    for(i=0;i<n;i++)
        cin>>h[i];
    
    p=max_element(h,h+n);
    
    (*p-k>0) ? cout<<*p-k : cout<<0 ;
    
}
