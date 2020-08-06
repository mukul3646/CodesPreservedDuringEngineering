#include<stdio.h>

typedef struct process
{

int at;
int wt;
int ct;
int att;
int bt;

}process;

void cal(process p[],float awt, float tat, int n)
{

int i;

for(i=1;i<n;i++)
{

p[i].ct=p[i-1].ct+p[i].bt;
p[i].att=p[i].ct-p[i].at;
p[i].wt=p[i].att-p[i].bt;

awt=awt+p[i].wt;
tat=tat+p[i].att;
}

awt=awt/n;
tat=tat/n;

printf("awt= %f",awt);
printf("tat= %f",tat);
printf("\n");

}


int main()
{

int n,i;
float tat=0, awt=0;

printf("Enter the number of jobs");
scanf("%d",&n);

process p[n];

printf("Enter arrival times");
for(i=0;i<n;i++)
{
scanf("%d",&p[i].at);
}

printf("Enter burst times");
for(i=0;i<n;i++)
{
scanf("%d",&p[i].bt);
}

p[0].wt=0;
p[0].ct=p[0].bt;
p[0].att=p[0].ct;
awt=awt+p[0].wt;
tat=tat+p[0].att;


cal(p,awt,tat,n);

return 0;

}


