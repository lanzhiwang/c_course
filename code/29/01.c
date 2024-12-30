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

atoi
int atoi (const char * str);

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i;
	char buffer[256];
	printf("Enter a number: ");
	fgets(buffer, 256, stdin);
	i = atoi(buffer);
	printf("The value entered is %d. Its double is %d.\n", i, i * 2);

	printf("%d\n", atoi(""));
	printf("%d\n", atoi(" "));
	printf("%d\n", atoi("   abc"));
	printf("%d\n", atoi("  0"));
	printf("%d\n", atoi("123"));
	printf("%d\n", atoi("   123"));
	printf("%d\n", atoi(" -123"));
	printf("%d\n", atoi("  -123abc"));
	printf("%d\n", atoi("1111111111111111111111111111111111111111111"));

	return 0;
}

/**

# ./main
Enter a number: 73
The value entered is 73. Its double is 146.
0
0
0
0
123
123
-123
-123
-1
#

 */
