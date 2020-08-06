#include<bits/stdc++.h>
using namespace std;

long long int funk(long long int a[], long long int n)
{
    if(n==0)
        return 1;

    long long int max=INT_MIN,index;

    for(int i=0;i<n;i++)
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }

    if(a[1]==max || a[n]==max)
        return 1;

    long long int x=funk(a,index);
    long long int y=funk(a+index+1,n-index-1);

    if(x<y)
        return x+1;
    else
        return y+1;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
          long long int count=funk(a,n);
        cout<<count<<endl;
    }
    return 0;
}
