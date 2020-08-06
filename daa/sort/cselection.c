#include<stdio.h>
#include<string.h>

int main()
{

int n,i,j,min;
char a[100],temp;
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%c",&a[i]);

for(i=0;i<n;i++)
{
 min=i;
 for(j=1+i;j<n;j++)
 {

 if(a[min]<a[j])
	{
	 min=j;
	}

 }

temp=a[i];
a[i]=a[min];
a[min]=temp;

}

for(i=0;i<n;i++)
printf("%c ",a[i]);

}
