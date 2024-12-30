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

int my_strcmp1(const char *str1, const char *str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	char c1 = *str1;
	char c2 = *str2;
	/**
	c1 c2
	a  b
	a  \0
	\0 a
	\0 \0
	 */
	while (c1 == c2 && (c1 != '\0' || c2 != '\0')) {
		c1 = *(++str1);
		c2 = *(++str2);
	}

	if (c1 > c2) {
		return 1;
	} else if (c1 < c2) {
		return -1;
	} else {
		return 0;
	}

}

int my_strcmp2(const char *str1, const char *str2)
{
	assert(str1 && str2);

	while (*str1 == *str2) {
		if (*str1 == '\0') {
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2) > 0 ? 1 : -1;
}

int main(void)
{
	printf("my_strcmp1: %d\n", my_strcmp1("abc", "abc"));
	printf("my_strcmp1: %d\n", my_strcmp1("abc", "def"));
	printf("my_strcmp1: %d\n", my_strcmp1("abc", "ABC"));
	printf("my_strcmp1: %d\n", my_strcmp1("abcd", "abd"));

	printf("my_strcmp2: %d\n", my_strcmp2("abc", "abc"));
	printf("my_strcmp2: %d\n", my_strcmp2("abc", "def"));
	printf("my_strcmp2: %d\n", my_strcmp2("abc", "ABC"));
	printf("my_strcmp2: %d\n", my_strcmp2("abcd", "abd"));

	return 0;
}

/**

# ./main
my_strcmp1: 0
my_strcmp1: -1
my_strcmp1: 1
my_strcmp1: -1
my_strcmp2: 0
my_strcmp2: -1
my_strcmp2: 1
my_strcmp2: -1
#

 */
