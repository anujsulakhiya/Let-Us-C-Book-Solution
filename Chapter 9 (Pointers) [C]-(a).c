
#include<stdio.h>
void all(int,int,int,int,int,int *,float *);

int main()
{
  int a,b,c,d,e,s,av;

  printf("Enter Five Digits :");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  all(a,b,c,d,e,&s,&av);
  printf("Sum= %d\nAverage= %f",s,av);
  return 0;
}
void all(int a,int b,int c,int d,int e, int *s,float *av)
{
  *s=a+b+c+d+e;
  *av=(a+b+c+d+e)/5;
}
