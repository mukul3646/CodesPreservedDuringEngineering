#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,count=0,result,occ,temp,len,i;
    string str;
    getline(cin,str);
    cin>>n;
    len=str.length();
    
    for(i=0;i<len;i++)
    {
        if(str[i]=='a')
            count++;
    }
    
    if(n%len==0)
    {
        occ=n/len;
        result=occ*count;
        cout<<result;
    }
    
    else
    {
        occ=n/len;
        result=occ*count;
        temp=n%len;
        
        for(i=0;i<temp;i++)
        {
            if(str[i]=='a')
            result++;
        }
        
        cout<<result;
    }

    return 0;
}
