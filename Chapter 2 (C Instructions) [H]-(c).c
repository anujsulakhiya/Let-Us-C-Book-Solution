
#include<stdio.h>

int main()
{
  int a,b,c,area;

  printf("Enter First Side Of Triangle :");
  scanf("%d",&a);

  printf("Enter Second Side Of Triangle :");
  scanf("%d",&b);

  printf("Enter Third Side Of Triangle :");
  scanf("%d",&c);

  area=(a+b+c)/2;

  printf("Area of Triangle is :%d",area);
  return 0;
}
