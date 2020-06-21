#include <stdlib.h>
#include <stdio.h>
int main()
{
char a[10];
int s,j=0,i=0;
scanf("%s",a);
	while(a[j]!='\0')
	j++;
	s=j;
	
for(i=0;i<=(s/2);i++)
{
	
if(a[i]==a[s-1])
{ s--;
	}
else
{printf("not equal"); return 0;}
}
printf("eq\n");
return 0;
}
