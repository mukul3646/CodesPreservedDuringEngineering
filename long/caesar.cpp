#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,sum,i,n,k;
    char c;
    cin>>n;
    string str;
    getchar();
    getline(cin,str);
    cin>>k;
   
    k=k%26;
    for(i=0;i<n;i++)
    {
         c=str[i];
      
       if(c>=65 && c<=90)   
        {
            c=c+k;
            if(c>90)
            {
                c=c-90;
                c=c+64;
            }
        }
        
        else if(c>=97 && c<=122)
        {
            c=c+k;
            if(c>122)
            {
                c=c-122;
                c=c+96;
            }   
        }
        
        else
            continue;
        
        str[i]=c;
    }
    
    cout<<str;
    return 0;
}
