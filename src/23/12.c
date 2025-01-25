/**
函数

static 关键字

1. static 修饰局部变量
2. static 修饰全局变量
3. static 修饰函数

static 修饰局部变量, 改变了变量的存储类型, 普通的局部变量存储在"栈区", 但是被 static 修饰的局部变量是存储在"静态区"的

 */

#include <stdio.h>

void test(void)
{
	static int n = 5;
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

$ ./main
5 6 7 8 9
$

 */
