
#include<stdio.h>
#define  min(a,b)  a<b?a:b 
void Floyd(int g[20][20],int n)
{
  int a[20][20][20],i,j,k;
  
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
       { 
         a[0][i][j]=g[i][j];
       }  
      
    }
   for(k=1;k<=n;k++)
   {
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
       { 
         a[k][i][j]=min(a[k-1][i][j],a[k-1][i][k]+a[k-1][k][j]);  
       }
    }
   }
  
   for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
       { 
         printf("%d ",a[n][i][j]);
       }  
      printf("\n");
    }
 

       
}
int main()
{
  int n,a[20][20],i,j,A;
  scanf("%d",&n);
 
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     scanf("%d",&a[i][j]);
     
  Floyd(a,n); 
  return 0;
 
}
