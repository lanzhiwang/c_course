#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	int i = 0;
	float x = 0.0;
	scanf("%d%f", &i, &x);
	printf("i = %d, x = %e\n", i, x);

	return 0;
}

/**

$ ./main
      -13.45e12# 0
i = -13, x = 4.500000e+11
$

 */
