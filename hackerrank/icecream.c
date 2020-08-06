#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge(long int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
 
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
   
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(long int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  

int main()
{
    long int t,a[10000],m,n,i,j,x=0,k=0,r[10000];
    scanf("%li",&t);
    
    while(t>0)
    {
        scanf("%li%li",&m,&n);
        for(i=1;i<=n;i++)
        scanf("%li",&a[i]);
        
        mergeSort(a,1,n);
        
        for(i=n;i>0;i--)
        {
            printf("%li ",a[i]);
        }


        for(i=n;i>0;i--)
        {
            if(a[i]<m)
            {
                if((a[i]+x)<=m)
                {
                    r[k]=i;
                    x=x+a[i];
                    k++;
                }  

                else if(a[i]<x)
                {
                    k--;
                    r[k]=i;
                    x=a[i];
                    k++;
                }             
            }
        
        }
         for(i=k;i>=0;i--)
         printf("%li",r[i]);
        
        t--;
    }
    

    return 0;
}

