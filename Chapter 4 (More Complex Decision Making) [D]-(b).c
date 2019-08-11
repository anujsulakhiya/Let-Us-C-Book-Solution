
#include<stdio.h>

int main()
{
  char a;

  printf("Enter Any Character :");
  scanf("%c",&a);

  if (a>=65 && a<=90)
    printf("'The Character Insert By You is A Capital Letter'\n");
  if (a>=97 && a<=122)
    printf("'The Character Insert By You is A Small Letter'\n");
  if (a>=48 && a<=57)
    printf("'The Character Insert By You is A Digit'\n");
  if ((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
    printf("'The Character Insert By You is A Symbol'\n");


  return 0;
}
