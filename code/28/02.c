/**

strlen

size_t strlen ( const char * str );

size_t
Unsigned integral type  无符号整型
Alias of one of the fundamental unsigned integer types.
基本无符号整数类型之一的别名. 

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *str1 = "abcdef";
	const char *str2 = "abc";

	if (strlen(str1) - strlen(str2) > 0) {
		printf("str1 > str2\n");
	} else {
		printf("str1 <= str2\n");
	}

	// 无符号整型 - 无符号整型 = 无符号整型
	if (strlen(str2) - strlen(str1) > 0) {
		printf("str2 > str1\n");
	} else {
		printf("str2 <= str1\n");
	}

	if ((int)strlen(str2) - (int)strlen(str1) > 0) {
		printf("str2 > str1\n");
	} else {
		printf("str2 <= str1\n");
	}
	return 0;
}

/**

# ./main
str1 > str2
str2 > str1
str2 <= str1
#

 */
