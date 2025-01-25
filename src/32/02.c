#include <stdio.h>

/**
枚举

枚举类型的定义
 */

enum Color {			// 颜色
	RED,
	GREEN,
	BLUE
};

int main(void)
{
	enum Color clr = GREEN;
	printf("%d\n", clr);	// 1

	printf("%d\n", RED);	// 0
	printf("%d\n", GREEN);	// 1
	printf("%d\n", BLUE);	// 2
	return 0;
}
