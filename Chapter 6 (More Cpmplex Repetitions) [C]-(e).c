
#include<stdio.h>

main()
{
 int y;
 float i,x;

 for(y=1;y<=6;y++)
 {
   for(x=0.5;x<=12.5;x=x+0.5)
   {
     i=2+(y+0.5*x);
     printf("i=%.2f,y=%d,x=%.2f\n",i,y,x);
   }
 }

 return 0;
}