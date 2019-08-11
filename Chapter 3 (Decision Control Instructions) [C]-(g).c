
#include<stdio.h>

int main()
{
  int a,b,c,s;

  printf("Enter Three Side of Triangle:");
  scanf("%d%d%d",&a,&b,&c);

  s=a+b+c;

  if (s==180)
    printf("Yes Triangle Is Valid\n");
  else
    printf("No Triangle Is Not Valid");

  return 0;
}
