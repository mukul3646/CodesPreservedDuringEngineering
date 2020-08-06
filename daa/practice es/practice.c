#include<stdio.h>
#include<stdlib.h>

void merge(char arr[],int l,int m,int r) 
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
        if (L[i] >= R[j]) 
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
  

void mergeSort(char arr[], int l, int r) 
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
  char a[100];
  int l=0,r,i,n;
 
  FILE *fp;
  scanf("%d",&n);

  r=n-1;

  fp=fopen("input.txt","w");
  for(i=0;i<n;i++)
  	fprintf(fp,"\n%c",rand()%26+'a');

  fclose(fp);

  
  fp=fopen("input.txt","r");
  for(i=0;i<n;i++)
  	fscanf(fp,"\n%c",&a[i]);

  fclose(fp);

 mergeSort(a,l,r);

 fp=fopen("output.txt","w");
   for(i=0;i<n;i++)
  	fprintf(fp,"\n%c",a[i]);

  fclose(fp);


}
