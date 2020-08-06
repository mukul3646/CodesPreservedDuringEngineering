#include<stdio.h>
int main()
{
    int t,i,j=1,result[100],a;
    long long int c,n,s,ko,k;
    
    scanf("%d",&t);
    a=t;
    while(t>0)
    {
        scanf("%lli%lli%lli",&n,&c,&s);
        k=c;
        ko=0;
        s--;
        
        for(i=0;i<=c;i++)
        {
            if(s<=n && ko<c)
            {
                ko++;
                s++;
            }
            
            else if(s>n && ko<c)
            {
                s=2;
                ko++;
            }
            
            else if(ko==c)
                break;
            
        }
        
        result[j]=s;
        j++;
        t--;
    }
    
    for(i=1;i<=a;i++)
    printf("%d\n",result[i]);
    
    return 0;
}
