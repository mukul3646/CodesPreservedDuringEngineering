#include<bits/stdc++.h>
using namespace std;

int main()
{
 int l,b,area,perimeter;
 cin>>l;
 cin>>b;

 area=l*b;

 perimeter=2*(l+b);

 if(area==perimeter)
	cout<<"Eq"<<"\n"<<area;

 else if(area<perimeter)
 	cout<<"Peri"<<"\n"<<perimeter;

 else 
 	cout<<"Area"<<"\n"<<area;


}