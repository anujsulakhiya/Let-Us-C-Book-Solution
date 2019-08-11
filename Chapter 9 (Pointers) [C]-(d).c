
#include<stdio.h>
void shift(int *,int *,int *);

int main()
{
  int x,y,z;

  printf("Enter Value of x,y & z :");
  scanf("%d%d%d",&x,&y,&z);

  shift(&x,&y,&z);
  printf("x=%d, y=%d, z=%d",x,y,z);
}
void shift(int *a,int *b,int *c)
{
  int t;
  t = *a;
  *a = *b;
  *b = *c;
  *c = t;
}
