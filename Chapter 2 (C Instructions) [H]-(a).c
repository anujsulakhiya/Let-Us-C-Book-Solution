
#include<stdio.h>

int main()
{
  int a,b,c,d,e,n,s;

  printf("Enter a Five Digit Number :");
  scanf("%d",&n);

  a=n/10000;
  b=(n/1000)%10;
  c=(n/100)%10;
  d=(n/10)%10;
  e=n%10;
  s=a+b+c+d+e;

  printf("Sum of Five Digit Number is :%d",s);
  return 0;
}
