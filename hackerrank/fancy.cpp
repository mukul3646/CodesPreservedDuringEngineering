#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	getchar();

	while(t--)
	{

		int flag=0,s;

		string str1,str2;
		getline(cin,str1);

		str2=" not ";
		
		s=str1.length();

		size_t found = str1.find(str2); 
    	
    	if (found != string::npos) 
    		flag=1;


    	if(flag==1)
		cout<<"Real Fancy"<<endl;

		else if(str1.length()<3)
			cout<<"regularly fancy"<<endl;

		else if(str1.length()==3 && str1=="not")
			cout<<"Real Fancy"<<endl;

		else if(str1.substr(0,4)=="not ")
			cout<<"Real Fancy"<<endl;

		else if(str1.substr(s-4,s)==" not")
			cout<<"Real Fancy"<<endl;

		else
		cout<<"regularly fancy"<<endl;
	
	}

}	