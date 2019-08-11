
#include<stdio.h>

int main()
{
  int a,b,c,d,e,n,s,x;

  printf("Enter a Five Digit Number :");
  scanf("%d",&n);

  a=n/10000;
  b=(n/1000)%10;
  c=(n/100)%10;
  d=(n/10)%10;
  e=n%10;

  s=e*10000+d*1000+c*100+b*10+a;
  
  if (s==n)
    printf("Reverse of Number is Equal %d",s);
  else
    printf("Reverse of Number is Not Equal %d",s);

  return 0;
}
