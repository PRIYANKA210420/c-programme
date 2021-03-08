//program to implement binary searching
#include<stdio.h>
int main()
{
  int m,f,l,n,i,ele;
  
  printf("\n enter size of array:");
  scanf("%d",&n);
  int A[n];
  printf("\n enter array element:");
  for(i=0;i<n;i++)
  scanf("%d",&A[n]);
  
  printf("\nenter search element:");
  scanf("%d",&ele);
  
  f=0;
  l=n-1;
  while(f<=1)
  {
    m=(f+1)/2;
    if(ele>A[m])
     f=m+1;
    else if (ele<A[m])
     l=m-1;
    else if (ele==A[m])
    {
      printf("\n element found at position %d", m+1);
      break;
    }
    
  }
     
      if(f>l)
      print("\n element not found");
}