#include<stdio.h>
#include<string.h>
int main()
{
  char st[20],ch;
  int i,j,l;
  clrscr();
  printf("enter any string:");
  gets(st);
  l=strlen(st);
  /* sorting process */
  for(i=1;i<l;i++)
    for(j=0;j<l-i;j++)
if(st[j]>st[j+1])
{
 ch=st[j];
 st[j] = st[j+1];
 st[j+1]=ch;
}
   printf("Sorted string is \n");
   printf("%s\n",st);
  getch();
  }
