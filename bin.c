//program to calculate binomial coefficient
#include <stdio.h>
int main()
{
  int n,r,i,bin;
  printf("\n enter the value of n and r:");
  scanf("%d%d",&n,&r);
  
  bin=1;
  for(i=1;i<=r;i++)
  bin=bin*((n-i+1)/i); 
  printf("\n binomial coefficient=%d",bin);
}