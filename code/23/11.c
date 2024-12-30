/**
 函数

 static 关键字

 1. static 修饰局部变量
 2. static 修饰全局变量
 3. static 修饰函数

 */

#include <stdio.h>

void test(void)
{
	int n = 5;
	printf("%d ", n);
	n++;
}

int main(void)
{
	for (size_t i = 1; i <= 5; i++) {
		test();
	}
	printf("\n");

	return 0;
}

/**

# ./main
5 5 5 5 5
#

 */
