/**
指针运算

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

指针运算有三种:
1. 指针 + - 整数
2. 指针 - 指针
3. 指针的关系运算

 */

#include <stdio.h>
#include <string.h>

////////////////////////  指针 - 指针  ////////////////////////
int my_strlen(char *str)
{
	char *start = str;
	while (*str != '\0') {
		str++;
	}
	return str - start;

}

int main(void)
{
	char arr1[] = "abcdef";	// [ a b c d e f \0 ]
	char arr2[] = "abc\0def";	// [ a b c \0 d e f \0 ]
	printf("strlen(arr1) = %ld\n", strlen(arr1));	// strlen(arr1) = 6
	printf("strlen(arr2) = %ld\n", strlen(arr2));	// strlen(arr2) = 3

	int len1 = my_strlen(arr1);
	int len2 = my_strlen(arr2);
	printf("len1 = %d\n", len1);
	printf("len2 = %d\n", len2);

	return 0;
}

/**

# ./main
strlen(arr1) = 6
strlen(arr2) = 3
len1 = 6
len2 = 3
#

 */
