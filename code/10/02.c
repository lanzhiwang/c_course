#include <stdio.h>

int main(void)
{
	/**
	除号的两端如果是整数, 执行的是整数除法, 得到的结果也是整数
	如果希望得到浮点数的结果, 两个运算数必须至少有一个浮点数, 这是就是浮点数除法
	 */
	printf("%d\n", 6 / 4);	// 1
	printf("%f\n", 6 / 4.0);	// 1.500000
	printf("%f\n", 6.0 / 4);	// 1.500000
	printf("%f\n", 6.0 / 4.0);	// 1.500000

	printf("%d\n", (5 / 20) * 100);	// 0
	printf("%f\n", (5.0 / 20) * 100);	// 25.000000

	/**
	模除只能用于整数
	 */
	printf("%d\n", 6 % 4);	// 2
	// printf("%d\n", 6.0 % 4);

	/**
	模除结果的正负号取决于第一个操作数
	 */
	printf("%d\n", 6 % 4);	// 2
	printf("%d\n", 6 % -4);	// 2
	printf("%d\n", -6 % 4);	// -2
	printf("%d\n", -6 % -4);	// -2
	return 0;
}