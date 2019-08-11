
#include<stdio.h>

int main()
{
  float p,m,c,e,h,am,per;
  int g;

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

  printf("Number Of Subject failed:");
  scanf("%d",&g);

  am=(p+m+c+e+h)/5;
  per=((p+m+c+e+h)/500)*100;
  printf(" Aggregate Marks: %.2f\n Percentage: %.2f\n",am,per);

  switch(g)
  {
    case 1:
    if (g>3)
      printf("Sorry No Grace\n");
    else
      printf("The Grace is 5\n");
      break;

    case 2:
    if (g>2)
      printf("Sorry No Grace\n");
    else
      printf("The Grace is 4\n");
      break;

    case 3:
    if (g>1)
      printf("Sorry No Grace\n");
    else
      printf("The Grace is 5\n");
      break;

    default:
      printf("Sorry No Grace\n");
  }
  return 0;
}
