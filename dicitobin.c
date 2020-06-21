#include <stdlib.h>
#include <stdio.h>
int main()
{   int a[20],n,m,i,j=0;
	printf("enter a dicimal value\n");
    scanf("%d",&n);
    while(n!=1)
    {
      m=n%2;
      n=n/2;
      a[i]=m;
      i++;
    }
    
    a[i]=1;
    
   
  
	while(j!=3)
	{
	printf("a[j]= %d\n",a[j]);
	j++;
	}
	

    while(i!=-1)
    {
    printf(" %d",a[i]);
    i--;}
 
  return 0;
}
