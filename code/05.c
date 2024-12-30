#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 20;
	printf("%d\n", age);

	_Bool flag1 = true;
	bool flag2 = false;
	printf("%d\n", flag1);
	printf("%d\n", flag2);

	return 0;
}

/**
# ./main
20
1
0
#
 */
