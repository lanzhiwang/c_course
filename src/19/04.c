/**

 */

#include <stdio.h>

int main(void)
{
	/**
	switch (expression) {
	case value1:
		statement
	case value2:
		statement
	default:
		statement
	}

	expression 必须是整型表达式
	value1 必须是整型常量表达式
	*/
	int num = 0;
	scanf("%d", &num);
	switch (num % 3) {
	case 0:
		printf("余数是 0\n");
		break;
	case 1:
		printf("余数是 1\n");
		break;
	case 2:
		printf("余数是 2\n");
		break;
	}

	return 0;
}

/**

$ ./main
6
余数是 0

$ ./main
7
余数是 1

$ ./main
8
余数是 2

$ ./main
9
余数是 0
$

 */
