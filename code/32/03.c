#include <stdio.h>

/**
枚举

枚举类型的定义
 */

enum Color {			// 颜色
	RED = 5,
	GREEN = 8,
	BLUE
};

int main(void)
{
	enum Color clr = GREEN;
	printf("%d\n", clr);	// 8

	printf("%d\n", RED);	// 5
	printf("%d\n", GREEN);	// 8
	printf("%d\n", BLUE);	// 9
	return 0;
}
