/********************************************************************************
In the Gregorian calendar three criteria must be taken into account to identify leap years:

    The year can be evenly divided by 4;
    If the year can be evenly divided by 100, it is NOT a leap year, unless;
    The year is also evenly divisible by 400. Then it is a leap year.
********************************************************************************/
#include<stdio.h>

int main()
{
   int a,b,c;

  printf("Enter Sides Of Triangle :");
  scanf("%d%d%d",&a,&b,&c);

  if ((a>=b) && (a>=c))
  {
    if (a<(b+c))
      printf("Triangleis Valid");
    else
      printf("Triangle is Not Valid");
  }
  else if ((b>=a) && (b>=c))
  {
    if (b<(a+c))
      printf("Triangle is Valid");
    else
      printf("Triangle is Not Valid");
  }
  else if ((c>=a) && (c>=b))
  {
    if (c<(a+b))
      printf("Triangle is Valid");
    else
      printf("Triangle is Not Valid");
  }



  return 0;
}
