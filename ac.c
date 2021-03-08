//program to copy element of array from a to b 
#include<stdio.h>
int main()
{
  int i,n;
  printf("\n enter array size:");
  scanf("%d",&n);
  
  int A[n] ,B[n] ;
  
  printf("\n enter the array element:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
    B[i]=A[i];
  }
   
  printf("\n elments of B are:");
  for(i=0;i<n;i++)
  printf("%d",B[i]);
  
}