#include<bits/stdc++.h>
using namespace std;


int binarySearch(long long int arr[],long long int arr2[],long long int l, long long int r, long long int x,long long int y) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  

        if (arr[mid] == x && arr2[mid]==y) 
            return mid; 
 
 		else if(arr[mid]==x && arr2[mid]!=y)
 		{
 			
 				int p= binarySearch(arr,arr2, mid + 1, r, x,y);
	 		 	int q= binarySearch(arr,arr2, l, mid - 1, x,y);

	 		 	if(p!=-1)
	 		 		return binarySearch(arr,arr2, mid + 1, r, x,y);

	 		 	else if(q!=-1)
	 		 		return binarySearch(arr,arr2, l, mid - 1, x,y);

	 		 	else
	 		 	    return binarySearch(arr,arr2, l, mid - 1, x,y);
 		} 

 		else
 		{

        if (arr[mid] > x) 
            return binarySearch(arr,arr2, l, mid - 1, x,y); 
  
   
        return binarySearch(arr,arr2, mid + 1, r, x,y); 
    	}

    } 
  

    return -1; 
} 


long long int Partition(long long int [],long long int ,long long int,long long int,long long int []);

void Quick_sort(long long int a[],long long int p,long long int r,long long int n,long long int b[])

{
long long int q;
if(p<r)

 {
  q=Partition(a,p,r,n,b);
  Quick_sort(a,p,q-1,n,b);
  Quick_sort(a,q+1,r,n,b); 
   
 }

}

long long int Partition(long long int a[],long long int p,long long int r,long long int n,long long int b[])
{
long long int swap,x,i,j,k=0;
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

  swap= b[i];
  b[i]=b[j];
  b[j]=swap;

 }
 
 }
 
  swap=a[i+1];
  a[i+1]=a[r];
  a[r]=swap;

  swap=b[i+1];
  b[i+1]=b[r];
  b[r]=swap;

for(k=0;k<n;k++)

return (i+1);
}

int funk(long long int a[],long long int b[],long long int x,long long int y,long long int k)
{
	long long int i;
	
	int result=binarySearch(a,b,0,k-1,x,y);


if(result!=-1)
	return 1;

else 
	return 0;

}

int main()
{
	long long int t;
	cin>>t;
	
	while(t--)
	{
		long long int k,n,m,i,j,count=0,x=0,y,p=0,result=0,l,e; 
		cin>>n>>m>>k;

		if(n<=1000 && m<=1000)
		{
		long int a[1000][1000]={0};		

		for(i=0;i<k;i++)
		{
			cin>>x>>y;
			a[x][y]=1;
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
			
				if(a[i][j]==0)	
				{}

				else
				{
					if(a[i+1][j]!=1)
						count++;
					if(a[i-1][j]!=1)
						count++;
					if(a[i][j+1]!=1)
						count++;
					if(a[i][j-1]!=1)
						count++;
				}
		
			
			}

		}
		cout<<count<<endl;

		}

	else{
		long long int r=k-1;
		long long int a[k],b[k],arr[100000][2]={0};		

		for(i=0;i<k;i++)
			cin>>a[i]>>b[i];

		Quick_sort(a,p,r,n,b);

		for(i=0;i<k;i++)
		{
			arr[i][0]=a[i];
			arr[i][1]=b[i];
		}

		for(i=0;i<k;i++)
		{
			count=0;

			x=arr[i][0]+1;
			y=arr[i][1];
			if(funk(a,b,x,y,k))
				count++;

			x=arr[i][0]-1;
			y=arr[i][1];
			if(funk(a,b,x,y,k))
				count++;
			
			x=arr[i][0];
			y=arr[i][1]+1;
			if(funk(a,b,x,y,k))
				count++;

			x=arr[i][0];
			y=arr[i][1]-1;
			if(funk(a,b,x,y,k))
				count++;


			result=result+(4-count);

		}
			
		cout<<result<<endl;
		}

	}	

}