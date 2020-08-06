#include<stdio.h>
int main()
{
    int n,num=5,cum=0,i,div;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
     {
     div=num/2;
        cum=cum+div;
        num=div*3;

     }
  
    printf("%d",cum);
    
}
