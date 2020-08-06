#include <bits/stdc++.h>
using namespace std;

int main()
 {
  int m,n,temp,temp1,temp2,max=0,i;
  cin>>m>>n;
  int a[n];

  for (i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  max=a[0];
  for(i=0;i<n;i++)
   {
    if(i==n-1)
      temp=(m-1)-a[n-1];

    else
    {
        temp=abs(a[i]-((a[i]+a[i+1])/2));
     /*temp1=a[i+1]-((a[i]+a[i+1])/2);
      temp2=a[i]-((a[i]+a[i+1])/2);

      if(temp1>temp2)
      temp=temp2;

      else
      temp=temp1;
      */
    }
    if(temp>max)
      max=temp;
  }

  cout<<max<<endl;
}
