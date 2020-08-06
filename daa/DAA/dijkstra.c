#include<stdio.h>
#define INT_MAX 9999
int Min(int d[],int q[],int n)
{
   int min=INT_MAX,i,index;
   for(i=0;i<n;i++)
   {
      if(min>d[i]&&q[i]!=1)
      { min=d[i];
        index=i;
      }
   }
   q[index]=1;
  return index;
}

void Dijkstra(int g[20][20],int n,int s)
{
   int d[20],p[20],q[20]={0},i,j,index;
   
   for(i=0;i<n;i++)
   {
     d[i]=INT_MAX;
     p[i]=0;
   }
   d[s]=0;

   for(i=0;i<n;i++)
   {
     index=Min(d,q,n);
     for(j=0;j<n;j++)
     {
       if(d[j]>d[index]+g[index][j])
       {
          d[j]=d[index]+g[index][j];
          p[j]=i;
       }
     }
   } 
   for(i=0;i<n;i++)
    printf("%d ",d[i]);
   printf("\n");
}
int main()
{
  int n,a[20][20],s,i,j;
  scanf("%d",&n); 
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   { 
     scanf("%d",&a[i][j]);
   }
  }  
  
  for(i=0;i<n;i++)
  Dijkstra(a,n,i);
  return 0;

}

