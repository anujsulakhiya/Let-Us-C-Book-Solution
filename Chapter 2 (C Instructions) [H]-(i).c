#include<stdio.h>
#include<math.h>

int main()
{
  int rs1,rs2,rs5,rs10,rs50,rs100,n , note[7] , result[7];
    note[0] = 100;note[1] = 50;note[2] = 20;note[3] = 10;note[4] = 5;note[5] = 2;note[6] = 1;
    
    int i;

  printf("Enter A Any Value:");
  scanf("%d",&n);
  
  for(i=0; i <= 6 ; i++){
      if(n >= note[i]){
          result[i] = n/note[i];
          n = n % note[i];
          printf("note %d = %d\n",note[i],result[i]);
      }else{
          printf("note %d = 0\n",note[i]);
      }
  }
  
//   for(i=0; i <= 6 ; i++){
//        printf("note = %d\n",result[i]);
//   }
  


//   rs100=a/100;
//   rs50=(a%100)/50;
//   rs10=((a%100)%50)/10;
//   rs5=(((a%100)%50)%10)/5;
//   rs2=((((a%100)%50)%10)%5)/2;
//   rs1=(((((a%100)%50)%10)%5)%2)/1;

//   printf("Following are The Lowest Number of Notes\n");
//   printf("100 = %d\n",rs100);
//   printf("50 = %d\n",rs50);
//   printf("10 = %d\n",rs10);
//   printf("5 = %d\n",rs5);
//   printf("2 = %d\n",rs2);
//   printf("1 = %d\n",rs1);
  return 0;
}
