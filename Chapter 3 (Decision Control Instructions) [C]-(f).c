
#include<stdio.h>

int main()
{
  int a,b,c;

  printf("Enter Age of Ram, Shyam and Rajesh :");
  scanf("%d%d%d",&a,&b,&c);

  if ((a>b)&&(c>a))
    printf("Shyam is Youngest\n");
  if ((b>a)&&(c>a))
    printf("Ram is Youngest\n");
  if ((b>c)&&(a>c))
    printf("Rajesh is Youngest\n");

  return 0;
}
