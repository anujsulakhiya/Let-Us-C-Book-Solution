/********************************************************************************
In the Gregorian calendar three criteria must be taken into account to identify leap years:

    The year can be evenly divided by 4;
    If the year can be evenly divided by 100, it is NOT a leap year, unless;
    The year is also evenly divisible by 400. Then it is a leap year.
********************************************************************************/
#include<stdio.h>

int main()
{
  int a;

  printf("Enter Any Year:");
  scanf("%d",&a);

  if (a%400==0 || a%4==0 && a%100!=0)
    printf("Yes It is A Leap Year\n");
  else
    printf("It is Not A Leap Year\n");

  return 0;
}
