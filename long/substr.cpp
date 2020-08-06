#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int l,i,flag=0,index,n;
        string str;
        getchar();
        getline(cin, str);
        
        n=str.length();
        
        for(i=0;i<n;i++)
        {
            if(str[i]=='h')
            {
                flag++;
                index=i;
                break;
            }    
        }
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='a')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
         for(i=index+1;i<n;i++)
        {   
            if(str[i]=='c')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
         for(i=index+1;i<n;i++)
        {   
            if(str[i]=='k')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='e')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='r')
            {
                flag++;
                index=i;
                break;
            }    
        }      
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='r')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='a')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='n')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        for(i=index+1;i<n;i++)
        {   
            if(str[i]=='k')
            {
                flag++;
                index=i;
                break;
            }    
        } 
        
        
        if(flag==10)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }

    return 0;
}
