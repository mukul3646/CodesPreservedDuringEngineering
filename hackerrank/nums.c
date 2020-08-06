#include<stdio.h>
int main()
{
    int n,a[100],temp,j,length1,length[100],i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
    j=0;
    length1=1;
    for(i=0;i<n;i++)
    {
        j=i;
        while(j<n)
        {    
        if(a[j+1]-a[i]<=1)
        {
            j++;
            length1++;
        }
        else if(a[j+1]-a[i]>1)
            break;        
            
        }
	
        length[i]=length1;
        length1=1;
    }
    
        l=length[0];

        for (i = 1; i < n; i++) 
        {
        if (l < length[i])
        l=length[i];
        }
    

    printf("%d",l);
    
    
    
}
