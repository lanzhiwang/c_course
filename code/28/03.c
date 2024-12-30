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
#include <assert.h>

size_t my_strlen1(const char *str)
{
	size_t len = 0;
	assert(str != NULL);
	while (*str != '\0') {
		len++;
		str++;
	}
	return len;
}

size_t my_strlen2(const char *str)
{
	assert(str != NULL);

	const char *start = str;
	while (*str != '\0') {
		str++;
	}
	return (size_t)(str - start);
}

/**
my_strlen3(abcdef)
	my_strlen3(bcdef)
		my_strlen3(cdef)
			my_strlen3(def)
				my_strlen3(ef)
					my_strlen3(f)
						my_strlen3('\0')
							return 0
						return 1+0
					return 1+1
 */
size_t my_strlen3(const char *str)
{
	assert(str != NULL);

	if (*str == '\0') {
		return (size_t)0;
	}
	return (size_t)1 + my_strlen3(++str);
}

int main(void)
{
	const char *str = "abcdef";
	size_t len1 = my_strlen1(str);
	printf("len1 = %ld\n", len1);

	size_t len2 = my_strlen2(str);
	printf("len2 = %ld\n", len2);

	size_t len3 = my_strlen3(str);
	printf("len3 = %ld\n", len3);

	return 0;
}

/**

 */
