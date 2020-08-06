#include<stdio.h>
int main()
{
    int t,a[1000],k,i,n,nc=0,c=0,ans[1000];
    scanf("%d",&t);
    
    while(t>0)
    {
     
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                c++;
            
            else if(a[i]==0 || a[i]<0)
                nc++;
        }
        if(nc>=k)
            printf("NO\n");
        else
            printf("YES\n");
        
        t--;
    }
    
}
