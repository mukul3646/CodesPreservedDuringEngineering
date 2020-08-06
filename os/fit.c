#include<stdio.h>
#include<stdlib.h>

void first(int p[20],int r[20],int n,int m)
{
	int p1[20],r1[20],i,j;

	for(i=0;i<n;i++)
		p1[i]=p[i];

	for (i=0;i<m;i++)
		r1[i]=r[i];
	
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if(p1[j]>r1[i])
			{
				p1[j]=p1[j]-r1[i];
				r1[i]=0;
				break;
			}
		}

	}

	for(i=0;i<m;i++)
	{
		if(r1[i]==0)
		{
			printf("fit\n");
		}
		else
		{
			printf("Wait\n");
		}
	}


}

void best(int p[20],int r[20],int n,int m)
{
	int p1[20],r1[20],i,j,min,index,k;

	for(i=0;i<n;i++)
		p1[i]=p[i];

	for (i=0;i<m;i++)
		r1[i]=r[i];
	
	min=999;

	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{

			for(k=0;k<n;k++)
			{
			if(p1[k]>r1[i])
			{

				if(p1[k]<min)
					{
					min=p1[k];
					index=k;
					}
			}

			}


		p1[index]=p1[index]-r1[i];
		r1[i]=0;
		break;

		}

	}

	for(i=0;i<m;i++)
	{
		if(r1[i]==0)
		{
			printf("fit\n");
		}
		else
		{
			printf("Wait\n");
		}
	}

	}

	
	void worst(int p[20],int r[20],int n,int m)
	{
	int p1[20],r1[20],i,j,min,index,k;

	for(i=0;i<n;i++)
		p1[i]=p[i];

	for (i=0;i<m;i++)
		r1[i]=r[i];
	
	min=0;

	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{

			for(k=0;k<n;k++)
			{
			if(p1[k]>r1[i])
			{

				if(p1[k]>min)
					{
					min=p1[k];
					index=k;
					}
			}

			}


		p1[index]=p1[index]-r1[i];
		r1[i]=0;
		break;

		}

	}

	for(i=0;i<m;i++)
	{
		if(r1[i]==0)
		{
			printf("fit\n");
		}
		else
		{
			printf("Wait\n");
		}
	}

	}







int main()
{

	int p[20],r[20],i,n,m,choice;

	printf("Enter no of segments\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&p[i]);

	printf("Enter no of queries\n");
	scanf("%d",&m);

	for(i=0;i<m;i++)
		scanf("%d",&r[i]);


	printf("Enter\n1: for best \n2: for first \n3:for worst \n");
	scanf("%d",&choice);

	if(choice==1)
		{
			best(p,r,n,m);
		}

	else if (choice==2)
	{
		first(p,r,n,m);
	}

	else if (choice==3)
	{
		worst(p,r,n,m);
	}

	else
		printf("Wrong Input\n");


	return 0;
}
