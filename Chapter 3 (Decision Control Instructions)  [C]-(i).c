
#include<stdio.h>

int main()
{
  float l,b,area,peri;

  printf("Enter Length & Breadth of Rectangle:");
  scanf("%f%f",&l,&b);

  area=l*b;
  peri=2*(l+b);

  if (area>peri)
    printf("Yes Area is Greater Than Its Perimeter\n");
  else
    printf("No Area is Not Greater Than Its Perimeter\n");

  return 0;
}
