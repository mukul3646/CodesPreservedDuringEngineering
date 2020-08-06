#include<stdio.h>
int main()

{

int t;
long int a,b,min,max;

scanf("%d",&t);

while(t>0)
{

  scanf("%li%li",&a,&b);

  max=a+b;
  if(a>b)
  min=a;
  else
  min=b;

  printf("%li %li",min,max);


t--;
}

return 0;

}
