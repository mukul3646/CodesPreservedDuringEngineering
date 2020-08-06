#include<stdio.h>

int main()
{

int a[10],b[10],w[10],t[10],g[10],i,n;

float att=0, awt=0;

for(i=0;i<10;i++)
{
a[i]=0; b[i]=0; w[i]=0; t[i]=0, g[i]=0;

}

printf("Enter the number of jobs \n");
scanf("%d",&n);

printf("Enter the arrival time of jobs \n");

for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}

printf("Enter the burst time of jobs \n");

for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}

g[0]=0;

for(i=0;i<n;i++)
{
g[i+1]=g[i]+b[i];

}

for(i=0;i<n;i++)
{

w[i]=g[i]-a[i];
t[i]=g[i+1]-a[i];

awt=awt+w[i];
att=att+t[i];
}

awt=awt/n;
att=att/n;

printf("Average waiting time = %f \n",awt);
printf("Average turn around time = %f \n",att);


return 0;
}
