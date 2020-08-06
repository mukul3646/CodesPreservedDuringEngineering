#include<stdio.h>

int max(int a,int b)
{
   if(a>b)
    return a;
   else 
    return b;
}
int knapsack(int [],int [],int ,int);

int main()
{
   int n,k,i,j,c[20],w[20];
   printf("Enter the number of items\n");
   scanf("%d",&n);
   printf("Enter the capacity of the knapsack\n");
   scanf("%d",&k);
   
   for(i=1;i<=n;i++)
   {
       printf("Enter the cost of item %d\t",i);
       scanf("%d",&c[i]);
       printf("Enter the weight of item %d\t",i);
       scanf("%d",&w[i]);
     
   }
  
   knapsack(c,w,k,n);
   printf("Profit = %d",knapsack(c,w,k,n));

   return 0;
}
 int knapsack(int c[],int w[],int k,int n)
{int v[n][k];
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=k;j++)
    {
       if(i==0 || j==0)
          v[i][j] =0;
       else if(j<w[i])
          v[i][j]=v[i-1][j];
       else
          v[i][j]=max(v[i-1][j],c[i]+v[i-1][j-w[i]]);
    }
  }
 
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
    {
       printf("%d",v[i][j]);
    }

 }
return(v[n][k]);
 
}
