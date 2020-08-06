#include <bits/stdc++.h>
using namespace std;

bool isperfect(long double x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long int a,b,x,flag=0,i;
        cin>>a>>b;
    
        long int upper,lower,result;
    
    for(i=a;i<=b;i++)
    {
        if(isperfect(i))
        {
           lower=sqrt(i);
            flag=1;
            break;
        }
    }

    for(i=b;i>=a;i--)
    {
        if(isperfect(i))
        {
            upper=sqrt(i);
            flag=1;
            break;
        }    
    }

    result=upper-lower+1;

    if(flag==0)
        cout<<"0"<<endl;
    else
    cout<<result<<endl;

    }

}
