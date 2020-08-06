#include<stdio.h>

int partition(char [],int ,int);
void quick(char a[],int p, int r)
{
	int q;
  
  if(p<r)
	{
		q=partition(a,p,r);
		quick(a,p,q-1);
		quick(a,q+1,r);
	}

}


int partition(char a[],int p, int r)
{
	int x,i,swap,j;
 	i=p-1;
 	x=a[r];

 	for(j=p;j<=r-1;j++)
 	{
 		if(a[j]<=x)
 		{
 			i=i+1;
 			swap=a[i];
 			a[i]=a[j];
 			a[j]=swap;
 		}

 	}
 
 			swap=a[r];
 			a[r]=a[i+1];
 			a[i+1]=swap;
 

    return (i+1);
 }

int main()
{

char a[100];
int i,n,p=0,r;

scanf("%d",&n);
r=n-1;

for(i=0;i<n;i++)
{
	getchar();
	scanf("%c",&a[i]);
}
quick(a,p,r);

for(i=0;i<n;i++)
	printf("%c",a[i]);

}
