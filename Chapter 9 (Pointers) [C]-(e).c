
#include<stdio.h>
#include<math.h>

int ar(int,int,int,int *);

int main()
{
  int a,b,c,area;

  printf("Enter Value of a,b & c :");
  scanf("%d%d%d",&a,&b,&c);
  ar(a,b,c,&area);
  printf("Area = %d",area);
}
int ar(int a,int b,int c,int *area)
{
  int s;
  s=(a+b+c)/2;
  *area=sqrt(s*(s-a)*(s-b)*(s-c));
}
