/**

strcmp
int strcmp ( const char * str1, const char * str2 );

<0	the first character that does not match has a lower value in ptr1 than in ptr2
0	the contents of both strings are equal
>0	the first character that does not match has a greater value in ptr1 than in ptr2

str1 a b c d \0
     | | | |
str2 a b d \0

strncmp
int strncmp ( const char * str1, const char * str2, size_t num );

 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void)
{
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("abc", "def"));
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", strcmp("abcd", "abd"));

	return 0;
}

/**

# ./main
0
-1
1
-1
#

 */
