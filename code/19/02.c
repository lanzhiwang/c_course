#include <stdio.h>

int main(void)
{
	int num = 3;

	/**
	if (3 = num) {  // 02.c:7:15: error: lvalue required as left operand of assignment
		printf("123");
	}
	*/
	if (3 == num) {		// 写成 3 == num 而不是 num == 3 可以有效防止上述写成 3 = num 或者 num = 3 的错误
		printf("123");
	}

	return 0;
}
