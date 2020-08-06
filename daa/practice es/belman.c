#include<stdio.h>
#include<stdlib.h>

int billman(int g[20][20],int V,int k,int e[20][2])
{
	int s,d[20],p[20],flag=0,i,u,v,j;

	for(i=0;i<V;i++)
	{
		d[i]=1000;
		p[i]=-1;
	}

	printf("Enter source node:\n");
	scanf("%d",&s);
	d[s]=0;

for(i=0;i<V-1;i++)
{
	for(j=0;j<k;j++)
	{
		u=e[k][0];
		v=e[k][1];

		if(d[u]+g[u][v]<d[v])
			d[v]=d[u]+g[u][v];
	}

}

for(j=0;j<k;j++)
	{
		u=e[k][0];
		v=e[k][1];

		if(d[u]+g[u][v]<d[v])
			flag=0;
	}

	if(flag)
	{
		for(i=0;i<v;i++)
			printf("Vertex %d -> cost = %d parent = %d\n",i,d[i],p[i]);
	}

return flag;

}

int main()
{
 int g[20][20],e[20][2],V,i,j,k=0;

 scanf("%d",&V);

 printf("Enter matrix:\n");
 for(i=0;i<V;i++)
 {
 for(j=0;j<V;j++)
 	scanf("%d",&g[j][i]);   
 
 if(g[i][j]!=0)
 {
 	e[k][0]=i;
 	e[k++][1]=j;
 }
 }

if(billman(g,V,k,e))
	printf("Thank You\n");
else
	printf("Negative Weight Cycle\n");


return 0;
}
