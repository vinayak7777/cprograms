 /*#include<stdio.h>
    #include<math.h>
  int main()
  {   
    int h,a=50,b=80,c[20],d=0,i=2,e=0,product=1;
 
    while(i<=7){
     if(a%i==0&&b%i==0)
     {
       a=a/i;
       b=b/i;
      c[d]=i;
      d++;
       printf("i_%d\n",i);
       
      }
     else
     {i++;
     }
  //   printf("valie_%d\n",i);
    }
 
    while(c[e]!='\0'){
     printf("allc_%d",c[e]);
      product=product*c[e];
      e++;
    }
    printf("product_%d",product);
    return 0;
    
     }*/

 #include<stdio.h>
    #include<math.h>
  int main()
  {
	int a=26,b=80,d;
    if(a>b){
      printf("hi");
     while(b!=0) {
        d=b;
       
        b=a%b;  // b_is_as_c
         a=d;
               //a_as_b
      }
      printf("hcf_%d",a);
      }
      else{
        while(a!=0){
        d=a;
        a=b%a;  // b_is_as_c
        b=d;  
      }
          printf("hcf_%d",b);
    }
    return 0;
}
