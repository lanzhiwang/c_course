/**
函数

函数的声明和定义

在单个文件中
 */

#include <stdio.h>

// 函数的声明
int is_leap_year(int y);

int main(void)
{
	for (size_t i = 1; i <= 2025; i++) {
		int r = is_leap_year(i);	// 函数的调用
		if (r == 1) {
			printf("%ld 是闰年\n", i);
		} else {
			printf("%ld 是平年\n", i);
		}
	}

	return 0;
}

// 函数的定义
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
		return 1;
	} else {
		return 0;
	}
}

/**

 */
