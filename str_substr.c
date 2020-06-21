#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a[10],n,i,j,temp;
  scanf("%d",&n);
  while(n>=0)
  {
    scanf("%d",&a[n]);
    n--;
  }
  if(n%2==0)
  {
    for(i=0,j=n;i=(n/2),j=(n/2);i++,j--)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  else{
    for(i=0,j=n;i=(n/2),j=(n/2);i++,j--)
    {
      temp=a[i];
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
