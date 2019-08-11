
#include<stdio.h>
#include<math.h>

main()
{
 int a,b,c,p,t;

 for(a=1;a<=30;a++)
 {
   for(b=1;b<=30;b++)
   {
     for(c=1;c<=30;c++)
     {
       p=pow(a,2)+pow(b,2);
       t=pow(c,2);
       if(p==t)
       printf("a=%d,b=%d,c=%d\n",a,b,c);
     }
   }
 }




 return 0;
}
