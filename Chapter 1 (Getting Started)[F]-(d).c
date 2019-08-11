
#include<stdio.h>

int main()
{
  float tif,tic;

  printf("Enter Temperature of City in Fahrenheit:");
  scanf("%f",&tif);

  tic=(tif-32)/1.8;

  printf(" Temperature of City in Centigrade: %f",tic);
  return 0;
}
