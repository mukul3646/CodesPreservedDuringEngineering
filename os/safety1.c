#include<stdio.h>
void main()
{
  int n,avail,max[10],alloc[10],need[10],finish[10]={0},i,flag=0,sflag=1,j;
  
  printf("Enter the number of process: ");
  scanf("%d",&n);
  printf("Enter the available resources: ");
  scanf("%d",&avail);
  
  for(i=0;i<n;i++)
  {
    printf("Process[%d] Maximum  Allocated: ",i+1);
    scanf("%d %d",&max[i],&alloc[i]);
    need[i]=max[i]-alloc[i];
  }
  i=0;

  while(sflag!=0)
  {
  while(i!=n)
  {
    if(need[i]<=avail&&finish[i]==0)
    {
     alloc[i]=alloc[i]+need[i];
     avail=avail-need[i];
     need[i]=max[i]-alloc[i];
      
     if(max[i]==alloc[i])
     {
       avail=avail+max[i];
       finish[i]=1;
     }

    }
     i++;    
  }

  for(j=0;j<n;j++)
  {
    if(need[j]<=avail&&finish[j]!=1)
    {
      sflag=1;
      i=j;
      break;
    }
    else sflag=0;
  }

  }

  for(i=0;i<n;i++)
  {
    if(finish[i]==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  printf("\nUnsafe State\n");
   else printf("\nSafe State\n");
  
  printf("Process\tMAX\tAllocation\tNeed\n");
  for(i=0;i<n;i++)
  {
    printf("%d  \t%d \t%d   \t\t%d\n",i+1,max[i],alloc[i],need[i]);
  }
  printf("available resources:%d",avail);

  
}



