#include<stdio.h>
int* graderound(int n,int a[])
{
    int i,j,r[100],plus=0,x;
    for(i=0;i<n;i++)
    {
	plus=a[i];
	if(plus>37)
	{
        x=(5-a[i]%5);
        if(x<=2)
        {
        plus=plus+(5-a[i]%5);
	a[i]=plus;
        }
      
        }
    
	plus=0;     
   }
    
    return a;
    
}

int main()
{
    int n,a[100],i;
    int *p;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    p=graderound(n,a);
    
    for (i=0;i<n;i++ ) 
    {
      printf( "\n%d", *(p+i));
     }

   return 0;
} 
    
