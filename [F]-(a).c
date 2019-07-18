
#include<stdio.h>

int main()
{
  float d,r,b,g; // d= Dearness Allowance,r= Rent Allowance,b= Basic Salary,g= Gross Salary...

  printf("Enter a Basic Salary:");
  scanf("%f",&b);

  d=0.40*b;
  r=0.20*b;

  g=b+d+r; //Formula to calculate Gross Salary

  printf("%f\n",g);
  return 0;
}
