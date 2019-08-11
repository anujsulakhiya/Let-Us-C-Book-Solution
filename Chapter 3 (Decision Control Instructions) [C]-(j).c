
#include<stdio.h>

int main()
{
  int a,x1,y1,x2,y2,x3,y3,slope1,slope2,slope3;

  printf("Enter Value of (X1,Y1):");
  scanf("%d%d",&x1,&y1);

  printf("Enter Value of (X2,Y2):");
  scanf("%d%d",&x2,&y2);

  printf("Enter Value of (X3,Y3):");
  scanf("%d%d",&x3,&y3);

  slope1=(y2-y1)/(x2-x1);
  slope2=(y3-y2)/(x3-x2);
  slope3=(y3-y1)/(x3-x1);

  a=slope1+slope2+slope3;

  if (a==3)
    printf("Yes, All The Three Points Fall On One Straight Line");
  else
    printf("No, All The Three Points Fall On One Straight Line");

  return 0;
}
