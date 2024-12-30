#include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 4;
	int k = 5;
	if (i < j < k) {
		printf("i = %d, j = %d, k = %d\n", i, j, k);	// i = 3, j = 4, k = 5
	}

	i = 3;
	j = 40;
	k = 5;
	if (i < j < k) {
		printf("i = %d, j = %d, k = %d\n", i, j, k);	// i = 3, j = 40, k = 5
	}

	/**
	上述错误的原因是 i < j < k 等价于
	i < j 为真, 整个表达式的值是 1, 也就变成了
	1 < k

	正确的写法是
	 */
	if ((i < j) && (j < k)) {
		printf("123\n");
	} else {
		printf("456\n");
	}

	return 0;
}

/**
# ./main
i = 3, j = 4, k = 5
i = 3, j = 40, k = 5
456
#
 */
