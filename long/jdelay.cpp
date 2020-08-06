#include<bits/stdc++.h>
using namespace std;

int main()
{

int t,n,s[1000],j[1000],r[1000],count=0,i;

cin>>t;

while(t>0)
{
cin>>n;
for(i=0;i<n;i++)
cin>>s[i]>>j[i];

for(i=0;i<n;i++)
{
r[i]=j[i]-s[i];

if(r[i]>5)
count++;
}

cout<<count<<endl;
t--;

}

}