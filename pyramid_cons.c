  #include <stdlib.h>
#include <stdio.h>
int main()
{
  int n,i,m,l,a;
    printf("enter no of levels");
    scanf("%d",&n);
   m=n;
   for(i=0;i<(m);i++)
    {
      l=(i*2)+1;
      
      a=(n*2)/2;
      a=a-i;

     while(a!=0)
     {
       printf(" ");
       a--;
     }
     
      while(l!=0)
      {
        printf("*");
        l--;
      }
      
      printf("\n");
   
    }
    return 0;
}
