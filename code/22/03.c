/**
字符串和字符数组

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%s\n", "abcdef");	// abcdef
	printf("%s\n", "abc\0def");	// abc

	printf("%ld\n", strlen("abcdef"));	// 6
	printf("%ld\n", strlen("abc\0def"));	// 3

	char arr1[] = { 'a', 'b', 'c' };
	char arr2[] = { 'a', 'b', 'c', '\0' };
	char arr3[] = "abc";
	printf("%s\n", arr1);	// abc
	printf("%s\n", arr2);	// abc
	printf("%s\n", arr3);	// abc

	return 0;
}
