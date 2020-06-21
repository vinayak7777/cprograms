#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a=0,b=1,n,c=0;

printf("Enter how many number of terms u want to have\n");
scanf("%d",&n);
printf("%d\n",b);
while(n-1){
	c=b+a;
	printf("%d\n",c);
	a=b;
	b=c;
	n--;
}
return 0;
}
