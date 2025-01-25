#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	char ch = '0';
	scanf(" %c", &ch);	// 多了一个空格
	printf("|ch = %c|\n", ch);

	return 0;
}

/**

$ ./main
abc
|ch = a|
$

$ ./main
   abc
|ch = a|
$

 */
