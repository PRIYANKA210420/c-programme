//program to implement pascal triangle
#include<stdio.h>
int main()
{
  int i,n,s,j,bin; 
  
  printf("\nenter number of rows:");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
    for(s=n;s<i;s--)
     printf(" ");
     
    for(j=0;j<=i;j++)
    {
      if((i==0)||(j==0))
       bin=1;
      else
        bin=bin*((i-j+1)/j);
        printf("%d",bin);
    }
        printf("\n");
  }
}