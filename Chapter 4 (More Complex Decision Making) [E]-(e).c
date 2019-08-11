#include<stdio.h>


int main()
{
  float a;

  printf("Enter The Salary :");
  scanf("%f",&a);

  if ((a>=25000 && a<=40000)?(printf("Manager")):((a>=15000 && a<25000)?(printf("Accountant")):printf("Clerk")))

  return 0;
}
