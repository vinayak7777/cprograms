   #include<stdio.h>
    #include<math.h>
    #include<string.h>
  int main()
  {
  char z[10];
      int a=0,i=0,d=0,p[10],j=0,n=0,e=1;
     
       printf("enter\n");
      scanf("%s",z);
      
     
      /*while(z[i]!=NULL){
        i++;
      }
      a=0;
      printf("i=%d",i);*/
      i=strlen(z);
      printf("length_%d\n",i);
      while(a!=i)
      {
        
        p[j]=(int)z[a];
        j++;
        a++;
      }
      a=0;
      while(a!=i)
      {
        if(p[a]>=65&&p[a]<=90)
        {
          p[a]+=32;
          a++;
        }
        else
        a++;
      }
      
      d=i-1;
      
      while(n<d)
      {
        if(p[n]<p[e])
        ;
        else
        {
          printf("not ordered");
          return 0;
        }
        n=e;
        e++;
       // printf("%d\n",(int)z[i]);
      }
      printf("ordered\n");
   
   
   return 0;
}
