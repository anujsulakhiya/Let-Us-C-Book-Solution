

#include<stdio.h>
#include<math.h>

int main()
{
  float x,y,r,s; //s=thetaa

  printf("Enter Value of x and y in Cartesian Form :");
  scanf("%f%f",&x,&y);

  r=sqrt(x*x+y*y);
  s=atan(y/x);

  printf("Polar Form of Cartesion is :%.2f(cos(%.2f)+i.sin(%.2f))",r,s,s);
  return 0;
}
