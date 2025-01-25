#include <stdio.h>

int main(void)
{
	// 如果没有对应的 argument, 那么将随机输出一些值
	int a = 10;
	printf("%d|%d\n", a);	// warning: format '%d' expects a matching 'int' argument [-Wformat=]

	return 0;
}

/**

$ ./main
10|1544292424
$

 */
