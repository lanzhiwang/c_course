#include <stdio.h>

int main(void)
{
	char ch1 = '0';
	scanf("%c", &ch1);
	printf("|ch = %c|\n", ch1);

	char ch2 = '0';
	scanf("%c", &ch2);
	printf("|ch = %c|\n", ch2);

	return 0;
}

/**
# ./main
abc
|ch = a|
|ch = b|
#
 */
