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
	printf("strlen(arr1) = %ld, sizeof(arr1) = %ld\n", strlen(arr1), sizeof(arr1));	// strlen(arr1) = 4, sizeof(arr1) = 3  字符串长度不一定
	printf("strlen(arr2) = %ld, sizeof(arr2) = %ld\n", strlen(arr2), sizeof(arr2));	// strlen(arr2) = 3, sizeof(arr2) = 4
	printf("strlen(arr3) = %ld, sizeof(arr3) = %ld\n", strlen(arr3), sizeof(arr3));	// strlen(arr3) = 3, sizeof(arr3) = 4

	return 0;
}

/**

$ ./main
abcdef
abc
6
3
abc
abc
abc
strlen(arr1) = 4, sizeof(arr1) = 3
strlen(arr2) = 3, sizeof(arr2) = 4
strlen(arr3) = 3, sizeof(arr3) = 4
$

 */
