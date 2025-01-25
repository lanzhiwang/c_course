#include <stdio.h>

/**
枚举

枚举类型的定义
 */

enum Day {			// 星期
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Sex {			// 性别
	MALE,
	FEMALE,
	SECRET
};

enum Color {			// 颜色
	RED,
	GREEN,
	BLUE
};

int main(void)
{
	enum Color clr = GREEN;
	printf("%d\n", clr);	// 1
	return 0;
}
