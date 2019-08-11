
#include<stdio.h>
#include<math.h>

main()
{
 int a;

 for(a=0;a<24;a++)
 {
    if(a==0)
    {
      printf("%d Midnight\n",a);
    }
    else if (a<12)
    {
      printf("%d AM\n",a);
    }
    else if(a==12)
    {
      printf("%d Noon\n",a);
    }
    else
    {
      printf("%d PM\n",a);
    }

 }

 return 0;
}
