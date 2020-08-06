#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,len,j,count=0;
    string str,pan;
    pan="abcdefghijklmnopqrstuvwxyz";
    
    //The quick brown fox jumps over the lazy dog
    
    getline(cin,str);    
    len=str.length();
    
    for(i=0;i<len;i++)
      str[i]=tolower(str[i]);
    
    for(i=0;i<pan.length();i++)
    {
       
        for(j=0;j<len;j++)
        {
          if(str[j]==pan[i])
          {
              count++; 
              break;
          }
        }
    }    
    
    
    if(count==26)
        cout<<"pangram";
    else 
        cout<<"not pangram"<<" "<<count<<" "<<str;
    

    return 0;
}
