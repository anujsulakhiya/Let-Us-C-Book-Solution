#include<stdio.h>

main()
{
 int a,b,f=1,s;


  for(a=1;a<=7;a++)
  {
    for (b=1;b<=7;b++)
    {
      f=f*b;
      s=a/f;
      printf("&d\n",s);
    }

  }


 return 0;
}
