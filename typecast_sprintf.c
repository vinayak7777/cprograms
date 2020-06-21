#include <stdio.h>
#include <stdlib.h>
#include  <inttypes.h>
#include <string.h>
//Compiler version gcc  6.3.0

int main()
{
  /*int t=3,a,b=2;
  float c;
  double d;
  long double ld;
  long f;
  short g;
  char h;
  char i[10];
  char s[20],u[20]="v";

  sprintf(s,"%d",t); // typecasting_only , INTEGER TO STRING
  printf("sprintf(inttostring)_%s\n",s);    // printing_typecasted_str
 
  itoa(b,i,10);
  printf("itoa(inttostring)_%s\n",i);
 
 /*a=atoi(u);
 printf("ais_%d\n",a);*/

  /*c=b;
  printf("normal_%f\n",c);     	//float
  d=b;
  printf("normal_%f\n",d); // for double use %e %f %lf 
  ld=3.14e+2;
  printf("normal_%Lf\n",ld); 
  f=b;
  printf("normal_%d\n",f); 
  g=b;
  printf("normal_%d\n",g); 
  h=b;
  printf("normal_%d\n",h); */
  char m[10],m1[10];
  float l=45.4567789987984;
  short n=2;
  gcvt(l,10,m);
  printf("gcvt(floattostring)_%s\n",m); //in tgto string anf float to string rest do AND VICE CERSA
  
  return 0;
}


//inttostr flotostr doutostr chartoint 
//radix is base(100)2_binary,(100)10_decimal
//char=1   %c
//short=2  %d 
//int=4    %d
//long=8   %d

//float=4  %f %g %G %e %E
//double=8         %lf %e %E %g %G
//long double=10   %Lf

//Octal Representation
//short   %o
//int     %o
//long    %o

//Hexadecimal Representation
//short   %x %X
//int     %x %X
//long    %x %X
