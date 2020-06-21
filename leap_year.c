 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
  int main()
  {
		int a;
        printf("enter a year\n");
        scanf("%d",&a);
        if(a%4==0){
        printf("leap year%d",a);
        }
        else{
        printf("not a leap year");
        }
        return 0;
       }
