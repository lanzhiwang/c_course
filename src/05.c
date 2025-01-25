#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// bool 值
	int age = 20;
	printf("%d\n", age);	// 20

	_Bool flag1 = true;
	bool flag2 = false;
	printf("%d\n", flag1);	// 1
	printf("%d\n", flag2);	// 0

	return 0;
}

/**

$ ./main
20
1
0
$

 */
