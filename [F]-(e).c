
#include<stdio.h>

int main()
{
  float l,b,r,cir,peri,aor,aoc;

  printf("Enter Length of Rectangle:");
  scanf("%f",&l);

  printf("Enter Breadth of Rectangle:");
  scanf("%f",&b);

  printf("Enter Radius of Circle:");
  scanf("%f",&r);

  aor=l*b;
  peri=2*(l+b);
  aoc=3.14*(r*r);
  cir=2*3.14*r;

  printf(" Area of Rectangle: %f\n Perimeter of Rectangle: %f\n\n Area of Circle: %f\n Circumference of Circle: %f",aor,peri,aoc,cir);
}
