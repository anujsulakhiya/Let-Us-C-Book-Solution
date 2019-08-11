/********************************************************************************
In the Gregorian calendar three criteria must be taken into account to identify leap years:

    The year can be evenly divided by 4;
    If the year can be evenly divided by 100, it is NOT a leap year, unless;
    The year is also evenly divisible by 400. Then it is a leap year.
********************************************************************************/
#include<stdio.h>

int main()
{
  int a,b;

  printf("Enter Any Year:");
  scanf("%d",&a);

  b=a%400;

  if (b==0)
    printf("Yes It is A Leap Year\n");
  else
    printf("It is Not A Leap Year\n");

  return 0;
}
