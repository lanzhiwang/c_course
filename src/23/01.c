/**
函数
 */

#include <stdio.h>

int main(void)
{
	// printf 函数嵌套调用
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;

}

/**

$ ./main
4321
$

 */
