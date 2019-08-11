//for int use %d....
//for float use %f...
//for char use %c...


#include<stdio.h>

int main()
{
  int cp,sp,pro,los;

  printf("Enter Cost Price and Selling Price:");
  scanf("%d%d",&cp,&sp);

  pro=sp-cp;

  if (pro>0)
    printf("Yes Seller is in Profit of Rs. %d\n",pro);

  else
  {
    if (pro==0)
      printf("Seller Is not in Profit Nor In Loss");
    else
      printf("Seller is in Loss of Rs. %d\n",pro);
  }

  return 0;
}
