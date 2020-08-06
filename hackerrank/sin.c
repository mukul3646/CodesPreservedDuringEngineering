#include<stdio.h>
int main()
{
    long long int a[5]={426980153,354802167,142980735,968217435,734892650},l=0,s=0,swap;
    int i=0,j=0,max;
    
   /* for(i=0;i<5;i++)
    {
        scanf("%lli",&a[i]);
    }
    */

    for(i=0;i<5;i++)
    {
        max=i;
        for(j=i+1;j<5;j++)
        {
            if(a[max]<a[j])
            {
             max=j;
            }
        }
        swap=a[i];
        a[i]=a[max];
        a[max]=swap;
    
}
for(i=0;i<5;i++)
    printf("%lli ",a[i]);
    
    for(i=0;i<4;i++)
    l=l+a[i];        
    
    for(i=4;i>0;i--)
        s=s+a[i];
    
    
    printf("%lli %lli",s,l);
}
