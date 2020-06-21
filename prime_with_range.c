  #include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
  int main()
  {
    int a,v,j,n,i,m;
   scanf("%d%d",&n,&m);
   j=n+1;
   while(j<m)
     {
   
   for(i=2;i<(j/2);i++){
    a=j%i;
   if(a==0)
   {
     
   goto labe;
   }
   }
 labe:  if(a!=0)
  printf("%d\n",j);
   j++;
   }   
    return 0;
       }
