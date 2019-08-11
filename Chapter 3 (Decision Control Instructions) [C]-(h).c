
#include<stdio.h>

int main()
{
  int num;

  printf("Enter Any Number to Find Absolute Value:");
  scanf("%d",&num);

  if (num<0)
    num=num*(-1);
    printf("Absolute Value is:%d\n",num);

  return 0;
}
