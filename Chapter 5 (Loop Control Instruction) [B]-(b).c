#include<stdio.h>

main()
{
 int f=1,i,n;
 printf("Enter a Number- ");
 scanf("%d",&n);

 for (i=1;i<=n;i++)
  f=f*i;

 printf("Factorial Value is %d",f);

 return 0;
}
