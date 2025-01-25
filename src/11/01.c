#include <stdio.h>

/**
# 程序块
C 语言中对成对大括号构成的代码叫做程序块(也叫复合语句)
 */

// 函数是一个程序块
void test()
{
	printf("hello world");
}

int main(void)
{
	int i = 0;
	// for 循环是一个程序块
	for (i = 0; i < 10; i++) {
		;
	}

	return 0;
}
