//program to 
#include<stdio.h>
int main()

{
  int m,n,i,j;
  printf("\n enter row size and column size of array:");
  scanf("%d%d",&m,&n);
  
  int A[m][n],B[m][n];
  printf("\n enter array elements:");
  for(i=0; i<m;i++);
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&A[i][j]);
      B[i][j]=A[i][j];
    }
  }
}