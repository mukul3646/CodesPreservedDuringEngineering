#include <bits/stdc++.h>
using namespace std;

int main()
{
 int p,d,m,s,count=1;
    
    cin>>p>>d>>m>>s;
    
        s=s-p;
    
        while(p<s)
        {
        if(p>m)
        {
         p=p-d;    
         count++;
         s=s-p;
            if(s==0)
                break;
            }
            else if(p==m)
            {
                count++;
                 s=s-m;
                    if(s==0)
                    break;
            }
        }
    
    cout<<count;
           
    }

