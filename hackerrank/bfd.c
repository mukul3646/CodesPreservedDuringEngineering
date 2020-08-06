#include<stdio.h>

int main()
{
    int num=0,re=0,r=0,count=0,x;
    int s,i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&s);
   
   
    for(i=i;i<=j;i++)
      {
	x=i;
        while(i!=0)
	{
	 r = x%10;
         re = re*10 + r;
         x /= 10;
	}
        
        if(abs(i-re)%s==0)
        {
            count++;
        }
	re=0;
    }
    printf("%d",count);
}
