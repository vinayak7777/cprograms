   #include<stdio.h>
#include<math.h>
#include<string.h>
  int main()
  {
   int n,j,i,m;
         int a[10][10],b[10][10],c[10][10];
         printf("enter the number of rows and collumns\n");
          scanf("%d%d",&n,&m);
            
              i=0;j=0;
              while(i<n)  {
                while(j<m){
                  printf("enter for %d row\n",i);
                  printf("enter for %d column\n",j);
                scanf("%d",&a[i][j]);
                j++;
                }
                j=0;
                i++;
                
              }     
              i=0; j=0;
              printf("enter the number of rows and collumns\n");
          scanf("%d%d",&n,&m);
              while(i<n)  {
               while(j<m) {
                  
                 printf("enter for %d row\n",i);
                scanf("%d",&b[i][j]);
                j++;
                }
                j=0;
                i++;
                
              }     
              i=0;
              j=0;printf("enter the number of rows and collumns\n");
          scanf("%d%d",&n,&m);
              
              while(i<n){
                while(j<m){
                   printf("enter for %d row\n",i);
                
                c[i][j]=a[i][j]*b[i][j];
                j++;
                }
                j=0;
                i++;
              }
              i=0;j=0;
              while(i<n){
                while(j<m){
                  
      
                printf("ele_%d\n",c[i][j]);
                j++;
                }
                j=0;
                i++;
			}
        return 0;
    }
