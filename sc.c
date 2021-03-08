//program to to compute bubble sorting
#include<stdio.h>
int main()
{
  int min,temp, i, j,n ;
  
  printf("\nenter the size of array:");
  scanf("%d",&n);
  
  int A[n];
  
  printf("\nenter element of array:");
  for(i=0;i<n;i++);
  scanf("%d",&A[i]);
  
  printf("\narray before sorting:");
  for(i=0;i<n;i++)
  printf("%d\t",A[i]);
  
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(A[j]<A[min]);
       min=j;
    }
  
     temp=A[i];
     A[i]=A[min];
     A[min]=temp;
  }
    printf("\narray after sorting:");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
  
}