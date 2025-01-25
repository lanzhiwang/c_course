#include <stdio.h>

int main(void)
{

	/**
	if () {

	} else if () {

	} else {

	}
	*/

	int a = 0;
	int b = 2;
	/**
	else 总是跟它最接近的 if 匹配
	因此下面的 else 匹配的是 if (b == 2)
	 */

	/**
	if (a == 1)
		if (b == 2)
			printf("123123\n");
	else
		printf("456456\n");
	*/

	if (a == 1) {
		if (b == 2) {
			printf("123\n");
		} else {
			printf("456\n");
		}
	}

	return 0;
}

/**

$ ./main
$

 */
