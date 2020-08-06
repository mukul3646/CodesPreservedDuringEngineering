#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int n,i,j,k;
    cin>>n;
    long int a[n],b[n],index;

    for(i=1;i<=n;i++)    
            cin>>a[i];
        
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==a[j])
            {
                index=j;
                break;
            }
        }

        for(k=1;k<=n;k++)
        {

        	if(index==a[k])
        	{
        		index=k;
        		break;
        	}

        }

       
        b[i]=index;

    }

for(i=1;i<=n;i++)
cout<<b[i]<<endl;

} 