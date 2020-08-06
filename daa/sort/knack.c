#include<stdio.h>
 
 void main()
 {
   int i,j,n,k=50,max=0,swap,prof= 0;
   float var;
   
   printf("Enter the no of values:");
   scanf("%d",&n);
   
   int wt[]={30,35,20,25,10},pi[]={120,70,60,100,90},ratio[n];
   
   printf("Profit :");
  /* for(i=0;i<n;i++)
   {
     scanf("%d",&pi[i]);
     
   }
   
   printf("Weight :");
   for(i=0;i<n;i++)
   {
     scanf("%d",&wt[i]);
     ratio[i] = wt[i] /pi[i];
   }
   */
   for(i=0;i<n;i++)
   {
  
     ratio[i] = pi[i] /wt[i];
   }
   //Sorting
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n-1;j++)
   	if(ratio[i]>ratio[j])
   	{
   	  swap = ratio[i];
   	  ratio[i] = ratio[j];
   	  ratio[j] = swap;
   	  
   	  swap = wt[i];
   	  wt[i] = wt[j];
   	  wt[j] = swap;
   	  
   	  swap = pi[i];
   	  pi[i] = pi[j];
   	  pi[j] = swap;
   	
   	}
        
   }
   
   i = 0;
   while(k> (max + wt[i])&&i<n)
   { 
     max = max + wt[i];
     prof = prof + pi[i];
     i++;
   }
 
   var=(k - max)*ratio[i];
   prof = prof + var;
   printf("max profit:%d",prof);
   
  
   
   
   
 
 }
