#include<stdio.h>
int main()
{
    int i,j,a[5],b[5],ar[3][3],min,min2,k;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        
    }
    
    min=a[0];
    min2=b[0];
    for(i=1;i<5;i++)
    {
        
        if(a[i]<min)
        {
            min=a[i];
        }
        
        
        if(b[i]<min2)
        {
            min2=a[i];
        }
        
    }
    
    for(i=0;i<5;i++)
    {
        a[i]=a[i]-min;
        b[i]=b[i]-min2;
    }
    
  for(i=0;i<5;i++)
    {
        printf("%d %d\n",a[i],b[i]);
    }
   
    
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {  
          for(k=0;k<5;k++)
          {
              if(i==a[k]&&j==b[k])
              {
              ar[i][j]=1;
              }
              else
              ar[i][j]=0;
              
           } 
      }
  }

    
    for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {  
          printf("%d ",ar[i][j]);
      }
        printf("\n");
    }    
  return 0;  
    
}
