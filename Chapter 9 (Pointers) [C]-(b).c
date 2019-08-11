
#include<stdio.h>
void all(int,int,int,float *,float *);

int main()
{
  int p,c,m;
  float per,av;

  printf("Enter Marks Obtain in Mathematics :");
  scanf("%d",&m);
  printf("Enter Marks Obtain in Physics :");
  scanf("%d",&p);
  printf("Enter Marks Obtain in Chemistry :");
  scanf("%d",&c);

  all(p,c,m,&per,&av);
  printf("Percentage = %f\nAverage= %f",per,av);
  return 0;
}
void all(int p,int c,int m,float *per,float *av)
{
  *per=(p+m+c)/3;
  *av=(p+m+c)/3;
}
