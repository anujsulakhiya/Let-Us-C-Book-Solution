
#include<stdio.h>

int main()
{
  int a,b;

  printf("Enter Any Number:");
  scanf("%d",&a);

  b=a%2;

  if (b==0)
    printf("It is An Even Number\n");
  else
    printf("It is A Odd Number\n");

  return 0;
}
