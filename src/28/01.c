/**

strlen

size_t strlen ( const char * str );

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("strlen(\"abcdef\") = %ld\n", strlen("abcdef"));
	printf("strlen(\"abc\\0def\") = %ld\n", strlen("abc\0def"));

	char str1[] = { 'a', 'b', 'c' };
	char str2[] = { 'a', 'b', 'c', '\0' };
	printf("strlen(str1) = %ld\n", strlen(str1));
	printf("strlen(str2) = %ld\n", strlen(str2));

	return 0;
}

/**

$ ./main
strlen("abcdef") = 6
strlen("abc\0def") = 3
strlen(str1) = 4
strlen(str2) = 3
$

 */
