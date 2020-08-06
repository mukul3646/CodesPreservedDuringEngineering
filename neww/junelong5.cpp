#include<bits/stdc++.h>
using namespace std;
typedef  long long int lli;

bool comp(int a, int b) 
{ 
    return (a < b); 
} 


int main()
{
    lli t;
    cin>>t;
    
    while(t--)
    {
        lli n;
        lli max1=0,max2=0,max0=0;
        cin>>n;
 
        vector<lli>a,b;
 
    for(int j=1;j<=n;j++)
    {
 
    lli u;
    cin>>u;
    a.push_back(u);
    max0=max(max0,u);
 
    }
 
    if(n==1)
        cout<<a[0]<<endl;
    
    else
    {
 
    sort(a.begin(),a.end());

    bool bull=false;
    lli g1=a[0],g2=1,g3=a[0];
 
    for(int j=0;j<a.size();j++){
 
    if(__gcd(a[j],g1)==1){
 
    b.push_back(a[j]);
    max2=max(max2,a[j]);
 
    if(bull==false)
    {
    g2=a[j];
    bull=true;
    }
 
    else 
     g2=__gcd(g2,a[j]);
 
    }
 
    else{
        g1=__gcd(g1,a[j]);
        max1=max(max1,a[j]);
 
    }
 
    if(a[j]!=max0)g3=__gcd(g3,a[j]);
 
    }
 
 
    lli ans3=0;
 
    if(b.size()==0){
    ans3=g1+max0;
    }
 
    lli ans=0;
 
    lli result=max(g1+g2,max(ans3,max0+g3));

    cout<<result<<endl;
 
    }
 
    }

}
 
 
 
 
 