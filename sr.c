/*program to implement sum of array by recursion*/
#include<stdio.h>

int arraysum(int A[], int n);
int main()
{
  int n,i;
  printf("\n enter array size:");
  scanf("%d",&n);
  
  int A[n];
  
  printf("\n enter array element:");
  for(i=0; i<n; i++)
  scanf("%d", &A[i]);
  
  printf("\n sum=%d", arraysum(A,n));
  int arraysum (int A[n], int n)
  {
    if(n==0)
     return 0;
    else
     return A[n-1]+arraysum (A, n-1);
  }
  
}