#include<bits/stdc++.h>
using namespace std;


int main()
{
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{

		int flag=0,o=0,b=0,i;
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);


		for(i=0;i<3;i++)
		{
			int ot=0;

			if(s1[i]=='b')
				b++;

			else if(s1[i]=='o')
				o++;

			else
				ot++;

			if(s2[i]=='b')
				b++;

			else if(s2[i]=='o')
				o++;

			else
				ot++;

			if(ot==2)
			{
				flag=1;
				break;
			}

		}

		if(flag==1)
			cout<<"no"<<endl;

		else if(b<2 || o<1)
			cout<<"no"<<endl;

		else
			cout<<"yes"<<endl;


	}

}