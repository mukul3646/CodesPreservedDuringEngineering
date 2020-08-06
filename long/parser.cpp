#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,q,i;
    cin>>n>>q;
    getchar();

    string s[n],str[q];

    for(i=0;i<n;i++)
    getline(cin,s[i]);

    for(i=0;i<q;i++)
    getline(cin,str[i]);

    for(i=0;i<q;i++)
    {
       int length=str[i].length();

       size_t pos=str[i].find('~');
       pos--;

       length=length-pos-2;
       string value=str[i];
       value=value[pos];; 
  
      stringstream geek(value); 
   
    int v=0; 
    geek >> v; 

       v--;

       if(s[v].find(str[i])==-1)
       {
         cout<<"Not Found!";
       }

       else
       {
        pos=s[v].find(str[i]);
        pos=pos+length+4;

        while(strcmp(s[pos],'\"')!=0)
        {
            cout<<str[pos];
            pos++;
        }

       }
    

    }

    return 0;
}
