#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int n,i,j,c[1000],w=0,u,min,temp;
    float k=0.5;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
   
   for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
	 if(c[j]<c[j+1])
		{
		temp=c[j];	
		c[j]=c[j+1];
		c[j+1]=temp;
		}
	}
}
   
    for(i=0;i<n;i++)
    {
        k=k*2;
        u=k*c[i];
        w=u+w;
    }
    
    printf("%d",w);
    return 0;
}

