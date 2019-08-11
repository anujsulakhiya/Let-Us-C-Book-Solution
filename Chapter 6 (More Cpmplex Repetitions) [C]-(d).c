#include<stdio.h>

main()
{
 int a,b=1,c;

 printf("Enter a Number For Which You Want Table :");
 scanf("%d",&a);

 while(b<=10)
 {
   c=a*b;
   printf("%d * %d = %d\n",a,b,c);
   b++;
 }


 return 0;
}
