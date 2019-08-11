#include<stdio.h>
#include<math.h>

int power(int a,int b);
main()
{
 int p,a,b;
 printf("Enter Two Numbers- ");
 scanf("%d%d",&a,&b);
 p=power(a,b);
 printf("Your Answer is :%d",p);
 return 0;
}
int power(int a,int b)
{
  int p;
  if (a>1 && b>1)
  p=pow(a,b);
  return(p);
}
