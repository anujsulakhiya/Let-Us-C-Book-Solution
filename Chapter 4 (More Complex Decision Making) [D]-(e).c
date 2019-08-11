
#include<stdio.h>

int main()
{
   float r,b,g,c,m,y,k,w=0,bl;

  printf("Amount of Red Colour :");
  scanf("%f",&r);

  printf("\nAmount of Green Colour :");
  scanf("%f",&g);

  printf("\nAmount of Blue Colour :");
  scanf("%f",&b);

  if (w<r)
    w=r;
  if (w<g)
    w=g;
  if (w<b)
    w=b;

  c=(w-(r/255)/w);
  m=(w-(g/255)/w);
  y=(w-(b/255)/w);
  k=1-w;

  printf("\nC :%.2f\nM :%.2f\nY :%.2f\nK :%.2f",c,m,y,k);

  return 0;
}
