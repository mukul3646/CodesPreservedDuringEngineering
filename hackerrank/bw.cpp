#include<bits/stdc++.h>
using namespace std;

  
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  

long int findlcm(int arr[], int n) 
{ 
    
    long int ans = arr[0]; 
  
    
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

long int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 

int main()
{
	int m,n,i,j,count=0;
	long int lcm,gcd;
	cin>>m>>n;
	int a[m],b[n];

	for(i=0;i<m;i++)
		cin>>a[i];

	for(i=0;i<n;i++)
		cin>>b[i];
	
	lcm=findlcm(a,m);
	gcd=findGCD(b,n);

	int *p=max_element(b,b+n);

	i=1;

	for(i=lcm;i<=gcd;i++)
	{
		if(gcd%i==0)
		{
			count++;
		}

	}

cout<<count;


}