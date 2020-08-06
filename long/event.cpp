#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		int l,r,x,y,count=0,diff,index,i;
		cin>>l>>r;


		if(s1[0]=='m')
			x=1;

		else if(s1[0]=='t')
		{
			if(s1[1]=='u')
				x=2;
			else
				x=4;
		}

		else if(s1[0]=='w')
			x=3;

		else if(s1[0]=='f')
			x=5;

		else if(s1[0]=='s')
		{
			if(s1[1]=='u')
				x=7;

			else
				x=6;
		}


		if(s2[0]=='m')
			y=1;

		else if(s2[0]=='t')
		{
			if(s2[1]=='u')
				y=2;
			else
				y=4;
		}

		else if(s2[0]=='w')
			y=3;

		else if(s2[0]=='f')
			y=5;

		else if(s2[0]=='s')
		{
			if(s2[1]=='u')
				y=7;

			else
				y=6;
		}

 diff=abs(x-y)+1;

for(i=l;i<=r;i++)
{
	if(i%diff==0)
		{
			count++;
			index=i;
		}
}

if(count==1)
	cout<<index<<endl;

else if(count>1)
	cout<<"many"<<endl;

else
	cout<<"impossible"<<endl;

}

}
