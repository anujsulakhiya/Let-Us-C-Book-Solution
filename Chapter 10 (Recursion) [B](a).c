#include<stdio.h>
int sum(int);

int main()
{
  int n,s;

  printf("Enter a Five Digit Number :");
  scanf("%d",&n);
  s=sum(n);
  printf("Sum of Five Digit Number is :%d",s);
  return 0;
}
int sum(int n)
{
  if(n==0)
    return 0;
  else
    return(n%10+sum(n/10));
}
