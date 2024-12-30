#include <stdio.h>

/**
特殊的声明
在声明结构体的时候, 可以不完全的声明.
 */
struct {
	int a;
	char b;
	float c;
} x;

struct {
	int a;
	char b;
	float c;
} a[20], *p;

/**
 编译器会把上面的两个声明当成完全不同的两个类型.
 所以是非法的
 */
// p = &x;

int main(void)
{

	return 0;
}
