
#include<stdio.h>
int roman(int y);

int main()
{
  int y;

  printf("Enter Any Year :");
  scanf("%d",&y);
  roman(y);
}
int roman(int y)
{
  if(y>=1000)
  {
    printf("m");
    roman(y-1000);
  }
  else if(y>=500)
  {
    printf("d");
    roman(y-500);
  }
  else if(y>=100)
  {
    printf("c");
    roman(y-100);
  }
  else if(y>=50)
  {
    printf("l");
    roman(y-50);
  }
  else if(y>=10)
  {
    printf("x");
    roman(y-10);
  }
  else if(y>=5)
  {
    printf("v");
    roman(y-5);
  }
  else if(y>=1)
  {
    printf("i");
    roman(y-1);
  }
}
