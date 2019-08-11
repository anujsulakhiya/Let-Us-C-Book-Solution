//https://www.sanfoundry.com/c-program-prime-numbers-given-range/

#include<stdio.h>

main()
{
 int n,i;

 printf("Enter a Number b/w 1 to 300 :");
 scanf("%d",&n);

 i=2;
 while (i<=n-1)
 {
   if (n%i==0)
   {
     printf("It is Not A Prime Number");
     break;
   }
   i++;
 }
 if (i==n)
  printf("Yes It is a Prime Number");

 return 0;
}
