#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2,swap,dstr;
    int len1,len2,x,y,i,j=0,count=0,result;
    getline(cin,str1);
    getline(cin,str2);
    
    len1=str1.length();
    len2=str2.length();
    
    if(len1>len2)
    {
        swap=str1;
        str1=str2;
        str2=swap;  
    }
    
    dstr=str2;
    
    while(len1--)
    {
        for(i=0;i<len2;i++)
        {
            if(str2[i]==str1[j])
            {
                count++;
                str2.erase(i,1);
                len2--;
                break;
            }
            
        }
     
        j++;
        
    }
    
    x=dstr.length();
    x=x-count;
    y=str1.length();
    y=y-count;
    
    result=x+y;
    
    cout<<result;
    return 0;
}
