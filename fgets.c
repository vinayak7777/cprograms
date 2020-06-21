#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
{ 
  //fgets_and string compare
  char str1[32];
  char str2[32];
  int n;
           //gets_and_fgets_takes_string_with_spaces
           // gets_and_scanf_will_get_buffer_overflow
           //fgets will not
    // Ask for first string
    printf("Enter a string: ");
    fgets(str1, 10, stdin);
    
    // Ask for second string
    printf("Enter another string: ");
    fgets(str2, 10, stdin);
     // last_two_chars_n_fgets_are_\n and null(\0)
    // Print result 
    printf("The strings are %s!", strcmp(str1, str2) == 0 ? "equal" : "not equal");
 n=0;
 while(n!=11)
 {
   printf("%c",str1[n]);
   n++;
 }
 printf("hi");
    return 0;
}
