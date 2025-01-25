/**
函数

函数无返回值, 提前结束函数

 */

#include <stdio.h>

void print(int n)
{
	if (n < 1) {
		return;		// 提前结束函数
	}
	for (size_t i = 0; i <= n; i++) {
		printf("%ld ", i);

	}
}

int main(void)
{
	print(3);
	printf("\n");
	print(2);
	printf("\n");
	print(1);
	printf("\n");
	print(0);
	printf("\n");
	print(-1);
	printf("\n");

	return 0;

}

/**

$ ./main
0 1 2 3
0 1 2
0 1

$

 */
