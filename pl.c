//program to check palindrome
#include<stdio.h>
int main()
{
  int n,temp,rem,rev=0;
  printf("enter the number\n");
  scanf("%d",&n);
  temp=n;
  if(n<0)
  {
    printf("retry with positive integer!\n");
    return 0;
  }
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
   printf("reverse of %d is %d\n",temp,rev);
   if(rev==temp)
   {
     printf("%d is a palindrome\n",temp);
   }
   else
   {
     printf("%d is not a palindrome\n",temp);
     return 0;
   }
  
}