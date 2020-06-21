     #include<stdio.h>
      //  int h;
int main() {

  char str[20],s1[20],r1[20];
  int i,k,t,y,j=0,a,h;
  static int p;
   printf("enter a string\n");
   scanf("%s",str);
   printf("enter a sub-string to get replaced\n");
   scanf("%s",s1);
   
   printf("enter a sub-string to replace\n");
   scanf("%s",r1);
   k=0;
   while(k!=20)
   {
  //   printf("k= %c",str[k]);
   if(str[k]==NULL)
 {
    
 goto label;}
 else
  k+=1;
  }
 label:
  // printf("\nk= %d\n",k);
    
     for(i=0;i<k;i++)
  {
    
    t=str[i]; 
    y=s1[j];
  //  printf("t= %c\n",t);
   //   printf("y= %c\n",y);
    if(t==y)
    {
  //    printf("found\n");
      h=i;
      j++;
      }
      else{
        
  //    printf("no\n");
      
      }
   }
  h=h-(j-1);
//   printf("total letter j= %d\n",j);
//   printf("starting pos h= %d\n",h);
   
   a=0;
   while(j!=-0)
   {
     str[h]=r1[a];
     h++;
     a++;
     j--;
   }
   
   
 a=0;
 printf("array:");
   while(str[a]!='\0')
   {
     
   printf(" %c",str[a]);
   a++;
   }
   
  return 0;
}
/*


#include <stdio.h>
//Compiler version gcc  6.3.0

int main()
{
  int a[10],n,i,j,temp;
  scanf("%d",&n);
  while(n>=0)
  {
    scanf("%d",a[n]);
    n--;
  }
  if(n%2==0)
  {
    for(i=0,j=n;i=(n/2),j=(n/2);i++,j--)
    {
      a[i]=temp;
      a[i]=a[j];
      a[j]=temp;
    }
  }
  else{
    for(i=0,j=n;i=(n/2),j=(n/2);i++,j--)
    {
      a[i]=temp;
      a[i]=a[j];
      a[j]=temp;
    }
    
  }
  while(n>=0)
  {
    printf("%d",a[n]);
    n--;
  }
  printf("Hello, Dcoder!");
  return 0;
}

*/
