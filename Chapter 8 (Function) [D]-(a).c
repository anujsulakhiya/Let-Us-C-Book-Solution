#include<stdio.h>
int fact(int);

main()
{
 int n,a;
 printf("Enter a Number- ");
 scanf("%d",&n);
 a=fact(n);
 printf("Factorial Value is %d",a);
 return 0;
}
int fact(int n)
{
  int a=1,i;
  for (i=1;i<=n;i++)
   a=a*i;
   return(a);
}
