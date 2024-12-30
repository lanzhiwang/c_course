#include <stdio.h>

int a = 10;			// 全局变量

int main(void)
{
	int a = 20;		// 局部变量
	printf("a = %d\n", a);	// a = 20
	return 0;
}
