#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	char ch = '0';
	scanf("%c", &ch);
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
|ch =  |
$

 */
