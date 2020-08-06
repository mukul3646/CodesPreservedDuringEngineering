#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char a[3][3]; int i,flag=0,j;
		string str;
		for(i=0;i<3;i++)
		{	
			getline(cin,str);
			for(j=0;j<3;j++)
			{
				a[i][j]=str[j];
			}
		}

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{

				if(a[i][j]=='l')
				{
					if(a[i+1][j]=='l')
					{
						if(a[i+1][j+1]=='l')
						{
							flag=1;
							break;
						}
					}

				}
			
			}
			if(flag==1)
				break;
		}

		if(flag==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
	return 0;
}