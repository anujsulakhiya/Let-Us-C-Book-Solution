
#include<stdio.h>

int main()
{
  char a;

  printf("Enter Any Character :");
  scanf("%c",&a);

  if ((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127) ? printf("The Character Insert By You is A Symbol"):printf("The Character Insert By You is Not A Symbol"))


  return 0;
}
