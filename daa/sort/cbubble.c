#include<stdio.h>
#include<string.h>

int main()
{
 char a[100],i,j,temp;
 int n;
 printf("Enter number of chars");
scanf("%d",&n);

for(i=0;i<n;i++)
 scanf("%c",&a[i]);


for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
	 if(a[j]>a[j+1])
		{
		temp=a[j];	
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
}

for(i=0;i<n;i++)
printf("%c\n",a[i]);


}

