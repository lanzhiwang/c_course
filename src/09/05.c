#include <stdio.h>

int main(void)
{
	int ch;
	while ((ch = getchar()) == ' ') {
		;
	}
	printf("ch = %c\n", ch);

	return 0;
}

/**

$ ./main
   abc
ch = a
$

 */
