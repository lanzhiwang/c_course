/**

Functions

atof		Convert string to double (function)
atoi		Convert string to integer (function)
atol		Convert string to long integer (function)
atoll		Convert string to long long integer (function)
strtod		Convert string to double (function)
strtof		Convert string to float (function)
strtol		Convert string to long integer (function)
strtold		Convert string to long double (function)
strtoll		Convert string to long long integer (function)
strtoul		Convert string to unsigned long integer (function)
strtoull	Convert string to unsigned long long integer (function)

atof
double atof (const char* str);

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	printf("%f\n", atof(""));
	printf("%f\n", atof(" "));
	printf("%f\n", atof("   abc"));
	printf("%f\n", atof("  0"));
	printf("%f\n", atof("123"));
	printf("%f\n", atof("   123.7"));
	printf("%f\n", atof(" -123"));
	printf("%f\n", atof("  -123abc"));
	printf("%f\n", atof("1111111111111111111111111111111111111111111"));

	return 0;
}

/**

$ ./main
0.000000
0.000000
0.000000
0.000000
123.000000
123.700000
-123.000000
-123.000000
1111111111111111126596901884379344347856896.000000
$

 */
