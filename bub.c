//program to implement bubble sorting
#include<stdio.h>
int main()
{
  int i,j,n,temp;
  
  printf("\nenter array size:");
  scanf("%d",&n);
  
  int A[n];
  
  printf("\nenter array element:");
  for(i=0; i<n; i++)
   scanf("%d", &A[i]);
   
  printf("\n array before sorting: \n");
  for(i=0; i<n; i++)
   printf("%d\t",A[i]);
   
   for(i=0;i<n-1;i++)
   {
     for(j<0; j<n-i-1; j++)
     {
       if(A[j]>A[j+1])
       {
         temp=A[j];
         A[j]=A[j+1];
         A[j+1]=temp;
       }
     }
   }
   printf("\narray after sorting:\n");
   for(i=0; i<n; i++)
    printf("%d\t",A[i]);
    
  
}