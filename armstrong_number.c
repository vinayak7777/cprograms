  #include<stdio.h>
#include<math.h>
#include<string.h>
  int main()
  {
  int sum=0,n,k,m;
  printf("Enter the max number below which you want to have armstrong number\n");
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
         k=i;
         while(k>0)
       {
       m= k%10;
      // printf("m_%d\n",m);
         k=k/10;
         sum+=(m*m*m);
       }
       if(sum==i)
       printf("%d ia a Armstrong no\n",i);
       sum=0;
       }
       return 0;
       }
