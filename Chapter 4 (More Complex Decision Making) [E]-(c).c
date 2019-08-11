
#include<stdio.h>

int main()
{
  int a,b,c,g;

  printf("Enter First,Second & Third Number :");
  scanf("%d%d%d",&a,&b,&c);

  g = a>b ? (a>c ? a:c) : (b>c ? b:c);
  printf("%d\n",g);
}
