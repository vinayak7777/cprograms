   #include<stdio.h>
    #include<math.h>
  int main()
  {
    int date,month,year,yearby4s,n,sum,i=1,yearlast,yearlasts,yearby4,yearfind,yearcode,monthcode;
  printf("do you want to know 1st jan day or a particular date press 1 for 1st case else 2\n");
    scanf("%d",&n);
  switch(n){
    case 1: date=month=1;
            printf("enter a year\n");
            scanf("%d",&year);
            goto label;
            break;
  case 2:  printf("Enter date month year\n");
    scanf("%d%d%d",&date,&month,&year);
    
     break;
     }
 
 label:   if(month==1||month==10){
      monthcode=0;
    }
    else if(month==2||month==3||month==11){
      monthcode=3;
    }
    else if(month==4||month==7){
      monthcode=6;
    }
    else if(month==5){
      monthcode=1;
    }
    else if(month==6){
      monthcode=4;
    }
    else if(month==8){
      monthcode=2;
      
    }
    else if(month==9||month==12){
      monthcode=5;
    }
    yearfind=year;
    yearfind=yearfind/100;
  //  printf("%dyearfind \n",yearfind);
    if(yearfind%4==0)
    yearcode=6;
    else if(yearfind%4==1)
    yearcode=4;
    else if(yearfind%4==2)
    yearcode=2;
    else if(yearfind%4==3)
    yearcode=0;
    yearlasts=yearfind*100;
    
    yearlast=year%yearlasts;
   // printf("%dyearlast \n",yearlast);
    yearby4s=yearlast;
    yearby4=yearby4s/4;
    sum=date+monthcode+yearlast+yearcode+yearby4;
    sum=sum%7;
  //  printf("%d s\n",sum);
  //  printf("%d yearlast %d yerafind",yearlast,yearfind);
    if(yearlast%4==0){
      if(month==1||month==2){
        if(date==29&& month==2){
          goto labe;
        }
        else
      { sum=sum-1;
        goto labe;
      }
      }
   }
  labe: while(i==1){ 
     if(sum==0)
    printf("Sunday");
    else  if(sum==1)
    printf("Monday");
    else if(sum==2)
    printf("Tuesday");
    else if(sum==3)
    printf("wednesday");
     else if(sum==4)
    printf("Thursday");
    else   if(sum==5)
    printf("Friday");
    else   if(sum==6)
    printf("Saturday");
    i=0;
    }
   
   // printf("%d",sum);
     return 0; 
 }
     
