#include<stdio.h>

main()
{
 int t,o=0,i;

 printf("Enter the Hours Who Worked More Than 40 Hours :- ");
 scanf("%d",&t);

 i=1;
 
 while(i<=t)
 {
  o=i*12;
  i++;
 }
 printf("Overtime is Rs. %d",o);

 return 0;
}
