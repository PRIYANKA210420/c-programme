//program to implement linear search
#include<stdio.h>
int main()
{
  int i,ele,n;
  
  printf("\nEnter size of array:");
  scanf("%d",&n);
  
  int A[n];
  
  printf("\nEnter array elements:");
  for(i=0;i<n;i++)
  scanf("%d",&A[i]);
  
  printf("\nEnter search element:");
  scanf("%d",&ele);
  
  for(i=0;i<n;i++)
{
  if(A[i]==ele)
  {
    printf("\nPosition=%d",i+1);
    break;
  }
 
}
if(i==n)
printf("\nElement not found");

}