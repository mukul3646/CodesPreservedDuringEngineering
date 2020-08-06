#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,n;
 cin>>n;
 int x=1,y=n;
 
 for(i=1;i<=2*n-1;i++)
 {
   if(i==n)
   {
   	for(j=n;j>=1;j--)
   	{
   		cout<<j;

   	}

   }

 else
 {
   	if(i<n)
   	{
 		cout<<x;
 		x++;

 		for(j=2;j<n;j++)
 		cout<<" ";  	

 		cout<<y;
 		y--;

   }

   else
   {
   		cout<<x;
   		x--;

   		for(j=2;j<n;j++)
        cout<<" ";

    	cout<<y;
    	y++;
   }

 }

cout<<endl;
}


}