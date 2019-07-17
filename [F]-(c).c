
#include<stdio.h>

int main()
{
  float p,m,c,e,h,am,per;

  printf("Enter Marks in Physics:");
  scanf("%f",&p);

  printf("Enter Marks in Mathematics:");
  scanf("%f",&m);

  printf("Enter Marks in Chemistry:");
  scanf("%f",&c);

  printf("Enter Marks in English:");
  scanf("%f",&e);

  printf("Enter Marks in hindi:");
  scanf("%f",&h);

  am=(p+m+c+e+h)/5;
  per=((p+m+c+e+h)/500)*100;
  printf(" Aggregate Marks: %f\n Percentage: %f",am,per);
}
