#include<stdio.h>
int main()
{
    int s[100],n,i,j,count=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[i]=0;
                s[j]=0;
                break;
            }
        }

    }

printf("%d",count);

}

