    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      int t;
      cin>>t;
     
      while(t--)
      {
       int n,k,i,j,q,p=0,m=0,good=0,g;
       cin>>n>>k;
     
       int a[n]={0},b[n]={0},c[n]={0};
     
       for(i=0;i<n;i++)
       cin>>a[i];
     
       for(i=0;i<n;i++)
       {
            for(j=i;j<n;j++)
            {
            	p=0;
                    for(q=i;q<=j;q++)
                    {
                      b[p]=a[q];
                      p++;       
                    }

     	cout<<"p = "<<p<<endl;
                    int var=(k)/(j-i+1);

     	cout<<"var = "<<var<<endl;
                    

                    while(m<var)
                    {
                      m++;
                    }
     	cout<<"m = "<<m<<endl;
            int len=p;
     		int na=p;
     		int kk=0;

     		while(na>0)
     		{

     			for(int ii=kk;ii<m;ii++)
     			{
     				c[ii]=b[kk];
     			}

     			kk++;
     			na--;
     		}


     
            sort(c,c+(len*m));
           int ka=k;
            ka--;
     
            int x=b[ka];
     
            int xfre=count(b,b+p,x);
     
            for(g=0;g<p;g++)
            {
                    if(b[g]==xfre)
                    {good++;break;}
     
            }
     
            }
     
       }
     
     
       cout<<good<<endl;
     
      }
     
    }