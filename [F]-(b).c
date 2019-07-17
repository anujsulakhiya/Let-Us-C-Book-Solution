
#include<stdio.h>

int main()
{
  float d,dim,dif,dii,dic;
  //d=Distance,dim=Distance in Meters,dif=Distance in Feet,dii=Distance in Inches,dic=Distance in Centimeters

  printf("Enter a Distance b/w Two Cities in Km:");
  scanf("%f",&d);

  dim=d*1000;
  dif=d*3280.84;
  dii=d*39370.1;
  dic=d*100000;

  printf(" Distance in Meters: %f\n Distance in Feet: %f\n Distance in Inches: %f\n Distance in Centimeters: %f\n",dim,dif,dii,dic);
}
