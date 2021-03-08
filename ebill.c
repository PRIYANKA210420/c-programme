//program to calculate the electricity bill 
#include<stdio.h>
int main()
{
 float unit,rate,tot;
 char name[30];
 printf("\n enter consumer name:");
 gets(name);
 printf("\n enter units consumed:");
 scanf("%f",&unit);
 
 if(unit<0)
 {
   printf("\nInvalid unit!");
   return 0;
 }
 
 if (unit<=200)
  rate=0.8*unit;
  
 else if(unit>200 && unit<=300)
  rate=0.8*200+0.9*(unit-200);
  
 else if(unit>300)
  rate=0.8*200+0.9*100+1.0*(unit-300);
  
  tot=rate+100;
  
  if(tot>400)
    tot=0.15*tot+tot;
    
    printf("\nName:%s", name);
    printf("\nUnits:%.0f", unit);
    printf("\nBill Amt: Rs.%.2f",tot);
}
  
  
 