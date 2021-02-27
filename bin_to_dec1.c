
 #include <stdio.h>

//Compiler version gcc  6.3.0
 
int value(int,int);
int main()
{
  int i=0,v=0,v1=0,v2=0,w=1,a[10],d=0,max;
  printf("enter bin value and to end at any point enter any number other than 1 and 0\n");
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
  
   v1=value(w,max);
   v2=v1*a[i];
   v+=v2;
   w++;
  }
   printf("%d",v);
  
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
 return s;
 }
 else
 return 0;
 }

