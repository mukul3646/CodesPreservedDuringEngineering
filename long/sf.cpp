#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int t,n,i,f=1;
cin>>t;

while(t--)
{

cin>>n;
for(i=1;i<=n;i++)
f=f*i;

cout<<f<<endl;
f=1;
}

}