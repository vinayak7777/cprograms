#include<stdio.h>
    #include<math.h>
  int main()
   {
    int n;
    float faren,celsius;
   printf("enter 1- frlaeen to celsius 2-celsius to faren\n");
   scanf("%d",&n);
   switch(n){
     case 1: printf("enter farenheit val");
     scanf("%f",&faren);
       celsius=(faren-32.0)*(5.0/9.0);
       printf("%f", celsius);
       break;
       case 2: printf("enter celsius val");
     scanf("%f",&celsius);
      faren=(celsius*(9.0/5.0))+32.0;
       printf("%f", faren);
       break;
   }
     return 0; }
