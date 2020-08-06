#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int n,i;
    cin>>n;
  
    getchar();

    string s;
    getline(cin, s);
    int level=0,valley=0,flag=0;

    for(i=0;i<n;i++)
    {
        
        if(s[i]=='U')
        {
            level++;
            
            if(level==0 && flag==1)
            {
                valley++;
            }
        }
        
        else if(s[i]=='D')
        {
            level--;
            
            if(level<0)
            {
                flag=1;
            }
        }
  
    }
    
    cout<<valley<<endl;
    
    return 0;
}
