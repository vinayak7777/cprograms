 #include<stdio.h>
    #include<math.h>
  int main()
  {
    double a=5.0,b=1.0,c=1.0;
    double num1,num2,rootin,root,den;
    rootin=(b*b)-4*a*c;
      den=2*a;
    if(rootin<0){
      rootin*=-1;
       root=sqrt(rootin);
      num1=(-b)/den;
      printf("%.2f+(%.2fi/%.2f)",num1,root,den);
    }
    else{
    root=sqrt(rootin);
  
    num1=(-b+root)/den;
    num2=(-b-root)/den;
    //if(num1>0)
    printf("num1 %.2f\n",num1);
     printf("num2 %.2f\n",num2);
     }
    return 0;
  }
