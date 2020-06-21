/*#include <stdio.h>				
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int find(int);
int main(int argc, char **argv)
{
int a,g=0;
printf("Enetr bin value\n");
scanf("%d",&a);
g=find(a);
printf("%d\n",g);
return 0;
}
int find(int a)
{
	
	int s,h=0,sum=0;
	while((int)a){
	s=a%2;
	a=a/10;
	s*=pow(2,h);
	
	sum+=s;
	printf("sumis  %d\n",sum);
	h++;
	
}
	return sum;
}
	
	
	
	
*/#include <stdio.h>

//Compiler version gcc  6.3.0
 

int main()
{
  int n,i=0,j,v=0,v1=0,v2=0,w,a[10],d=0,max;
  printf("enter bin value and to end at any point emter any number other than 1 and 0");
  while(1)
  {
  scanf("%d",&d);
  if(d==1||d==0){
  a[i]=d;
  i++;
  max=i;
  }
  else
  goto labe;
  }
labe:  for(i=max-1;i>=0;i--)

  
 { 
   printf("wis  %d\n",w);
   v1=value(w,max);
   printf("v1 is=%d\n",v1);
   //printf("%d",a[i]);
  //if(i!-1)
 v2=v1*a[i];
 //printf("v2is %d\n",v2);
  v+=v2;
  printf("valis %d\n",v);
  w++;
  }
  
  printf("val_%d",v);
  
  }
 int value(int w,int max)
 {
   if(w<=max){
     
   int s=1;
   if(w==1)
   return s;
   while(w>1)
   {
 s*=2;
 
 w--;
 }
 printf("returned_%d",s);
 return s;
 }
 else
 return 0;
 }
