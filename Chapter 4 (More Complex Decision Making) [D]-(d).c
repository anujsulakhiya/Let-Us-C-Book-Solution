
#include<stdio.h>

int main()
{
   int a,b,c;

  printf("Enter Sides Of Triangle :");
  scanf("%d%d%d",&a,&b,&c);

  if ((a==b) || (b==c) || (c==a))
   printf("It is AN Isosceles Triangle ");
  else if ((a==b) && (a==c) && (b==c))
   printf("It is An Equilateral Triangle");
  else if ((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==b*b+a*a))
    printf("It is A Right Angle Triangle");
  else
    printf("It is A Scalene Triangle");

  return 0;
}
