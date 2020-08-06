#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	getchar();
	while(t--)
	{
		int a[2]={0},b[2]={0},c[2]={0},i,flag=0;
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);


			if(s1[0]=='b')
				a[0]++;

			else if(s1[0]=='o')
				a[1]++;


			if(s2[0]=='b')
				a[0]++;

			else if(s2[0]=='o')
				a[1]++;		


			if(s1[1]=='b')
				b[0]++;

			else if(s1[1]=='o')
				b[1]++;


			if(s2[1]=='b')
				b[0]++;

			else if(s2[1]=='o')
				b[1]++;	


			if(s1[2]=='b')
				c[0]++;

			else if(s1[2]=='o')
				c[1]++;


			if(s2[2]=='b')
				c[0]++;

			else if(s2[2]=='o')
				c[1]++;	



			for(i=0;i<3;i++)
			{
				if(i==0)
				{
					if(a[1]>0)
					{
						if(b[0]>0 && c[0]>0)
						{
							flag=1;
						}
					}

				}

				if(i==1)
				{
					if(b[1]>0)
					{
						if(a[0]>0 && c[0]>0)
						{
							flag=1;
						}
					}

				}

				if(i==2)
				{
					if(c[1]>0)
					{
						if(a[0]>0 && b[0]>0)
						{
							flag=1;
						}
					}

				}

			}

			if(flag==0)
				cout<<"no"<<endl;
			else
				cout<<"yes"<<endl;

	}



}