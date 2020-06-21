#include <stdlib.h>
#include <stdio.h>
int main()
{   int a[20],n,m,i,j=0;
    scanf("%d",&n);
    while(n!=1)
    {
      m=n%2;
      n=n/2;
     // printf("j= %d\n",a[j]);
      a[i]=m;
      i++;
    }
    a[i]=1;
    printf("i1= %d",i);
   // while(a[i]!='\0')
  //  b=i;
 while(j!=3)
 { printf("a[j]= %d\n",a[j]);
 j++;}
 //i--;
  printf("i1= %d\n",i);

    while(i!=-1)
    {
     // printrf( "i= %d\n",i);
    printf(" %d",a[i]);
    i--;}
    //printf("1");
  return 0;
}
