#include<stdio.h>
int main()
{
    char b='X',a[100][100];
    int i,j,n;
   
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%c",&a[i][j]);
    	}
    }

 	for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%c",a[i][j]);
    	}
    	printf("\n");
    }

    
       for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0 && j>0 && i<n-1 && j<n-1)
            {
                if(a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j])
                {
                    a[i][j]=b;   
                }
                
            }
        }
            
        }
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
         printf("\n");
    }
    
    }
    

