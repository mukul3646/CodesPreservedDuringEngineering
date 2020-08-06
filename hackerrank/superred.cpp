#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s,f;
    int len,i=0;
    getline(cin, s);
    
    len=s.length();
    
    
    while(i<=len-1)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            len=len-2;
            i=0;
        }
        
        else
        {
            i++;
           
        }
        
    }
    
    if(s.length()>0)
    cout<<s<<endl;

    else
        cout<<"Empty String";
    return 0;
}

