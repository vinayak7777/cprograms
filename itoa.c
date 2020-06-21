 //CONVERSION_using_itoa()_function INTO DIFFERENT NUMBER SYSTEMS
 //INTEGER TO ASCII(itoa) american_standard_code_for_information_exchange
#include <stdlib.h>//ALL TYPECAST FUNCTIONS ARE PRESENT HERE
#include <stdio.h>
int main()
{
	int num = 17;
	char bin[5],dec[5],hex[5],hex_dec[5];

// convert 123 to string [buf]
itoa(num,bin,2); //in binary
itoa(num,dec,10); //in decimal
itoa(num,hex,8); //in octa
itoa(num,hex,6); //in hex
itoa(num,hex_dec,16); //in hexadecimal

// print our string
printf("In binay_       %s\n", bin);
printf("In decimal_     %s\n", dec);
printf("In hex_         %s\n", hex);
printf("In hexadecimal_ %s\n", hex_dec);

  return 0;
}
//ASCII==STRING
