#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int n,i,j,count=0;

    getline(cin,s);
    getline(cin,t);    
    cin>>n;
    int len1=s.length();
    int len2=t.length();

int k=0;
        while(k<len2)
        {
            
            if(s[k]==t[k])
            {
                count++;
            }
            else break;

            k++;
        }

        int del=len1-count;
        int app=len2-count;

        int total=del+app;

       // cout<<total<<endl;

        if(total==n)
                cout<<"Yes"; 

        else if(total<=n)
                cout<<"Yes";   
        
        else
            cout<<"No";

    return 0;
}