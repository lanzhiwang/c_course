#include <stdio.h>

extern int a;			// 全局变量

void test2(void)
{
	printf("other.c test2 a = %d\n", a);	// a = 10
}
