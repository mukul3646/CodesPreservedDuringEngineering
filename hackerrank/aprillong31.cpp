#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int t;
  cin>>t;

  	map<int,int>row;
  	map<int,int>column;
  	map<int,int>::iterator itr;
  while(t--)
  {
  	long int x,y,n,m,k,i;
  	cin>>n>>m>>k;

  	for(i=0;i<k;i++)
  	{
  		cin>>x>>y;
  		row.insert(make_pair(i,x));
  		column.insert(make_pair(i,y));
  	}

  	for(itr=column.begin();itr!=column.end();itr++)
  		cout<<itr->first<<" "<<itr->second<<endl;

  }

}