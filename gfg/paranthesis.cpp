#include <bits/stdc++.h>
using namespace std;

char rev(char x)
{
	if(x=='{')
		x='}';

	else if(x=='[')
		x=']';

	else if(x=='(')
		x=')';

		return x; 

}

int pop(int top)
{
    top--;
    //cout<<"p"<<top<<endl;
    return top;
}

int push(char s,char stack[],int top)
{
	top++;
    stack[top]=s;
    //cout<<top<<endl;
    return top;
}

int main() {
	long int t;
	cin>>t;
	getchar();
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    char stack[n]; 
	    int i,top=-1;
	    for(i=0;i<n;i++)
	    {
		  
		   if(s[i]==rev(stack[top]))
	        {
	            top=pop(top);
	        }

	        else
	        {
	            top=push(s[i],stack,top);
	        }

	    }
	    
	    if(top==-1)
	    cout<<"balanced"<<endl;
	    
	    else
	    cout<<"not balanced"<<endl;


	    
	}    
	return 0;
}
