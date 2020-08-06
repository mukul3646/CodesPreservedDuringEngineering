#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len,count=0,i,j;
    string str;
    getline(cin, str);

    len=str.length();
    
    for(i=0;i<len;i++)
    {
        j=str[i];
        
        if(j!='S' && j!='O')
        {
            count++;
        }
    
    }
    
    cout<<count<<endl;

    return 0;
}
