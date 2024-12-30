/**

strstr
const char * strstr ( const char * str1, const char * str2 );
char * strstr ( char * str1, const char * str2 );

Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "This is a simple string";
	char *pch;
	pch = strstr(str, "simple");
	if (pch != NULL)
		strncpy(pch, "sample", 6);
	puts(str);
	return 0;
}

/**

# ./main
This is a sample string
#

 */
