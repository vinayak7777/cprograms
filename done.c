#include<stdio.h>
#include<math.h>
#include<string.h>
  int main()
  {
	int a=4,b=5,c;
    char h[20],k[20],n[20]="vinayak";
    long double d=32;
    printf("longdouble_%Lf\n",d);
    printf("string_val_%d\n",strlen(n));
    printf("%s", (a=b)?"equals\n":"not_equals\n");   //the_conditional_expression_always_returns _something
     //(4=5)?printf("copmpitet"):printf("vinayak");
     
     puts("enter a string\n");
     gets(h);
     puts("enter another string\n");
     gets(k);
     c=strcmp(h,k); 								//returns (I)-1:if_1st_array_is_smaller (II)0:if_equal (III)1:if_greater
     printf("c_%d",c);
      return 0;
    }
