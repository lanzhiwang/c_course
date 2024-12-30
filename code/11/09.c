#include <stdio.h>

int a = 10;			// 全局变量

/**
全局变量从定义的位置开始直到该源文件结尾都可以使用

甚至全局变量在其他源文件中也是可用的, 例如在 other.c 源文件中可用
 */

extern void test2(void);

int main(void)
{
	test1();
	test2();

	printf("09.c main a = %d\n", a);	// a = 10
	return 0;
}

void test1(void)
{
	printf("09.c test1 a = %d\n", a);	// a = 10
}

/**
# gcc -v -Wall 09.c other.c -o main

# ./main
09.c test1 a = 10
other.c test2 a = 10
09.c main a = 10
#
 */
