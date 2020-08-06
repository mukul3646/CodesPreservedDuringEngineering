#include<stdio.h>


int Partition(int [],int ,int, int);

void Quick_sort(int a[],int p,int r,int n)

{
int q;
if(p<r)

 {
  q=Partition(a,p,r,n);
  Quick_sort(a,p,q-1,n);
  Quick_sort(a,q+1,r,n); 
   
 }

}

int Partition(int a[],int p,int r, int n)
{
int swap,x,i,j,k=0;
x=a[r];
i=p-1;

for(j=p;j<=r-1;j++)
 {
 
 if (a[j]<=x)
 {
  i=i+1;
  swap= a[i];
  a[i]=a[j];
  a[j]=swap;

 }
 
 }
 
  swap=a[i+1];
  a[i+1]=a[r];
  a[r]=swap;

for(k=0;k<n;k++)
printf("%d ",a[k]);

printf("\n\n");

return (i+1);
}


int main()
{
int p=0,r,i,n;
int a[1000],b[1000];
printf("Enter the number of elemenets");
scanf("%d",&n);
r=n-1;

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

Quick_sort(a,p,r,n);


printf("final array is \n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

printf("\n");


return 0;
}

