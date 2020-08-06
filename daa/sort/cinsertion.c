#include<stdio.h>
#include<string.h>

int main()
{

int n,i,j,min;
char a[100],key;
scanf("%d",&n);

for(i=1;i<=n;i++)
{
getchar();
scanf("%c",&a[i]);
}
for(j=2;j<=n;j++)
{
 key=a[j];
 i=j-1;

 while(i>0 && a[i]<key)
 {
 	a[i+1]=a[i];
 	i--;
 }

 a[i+1]=key;

}

for(i=1;i<=n;i++)
printf("%c",a[i]);
}
