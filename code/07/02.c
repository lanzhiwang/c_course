#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	scanf("|%d|%d|", &a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

/**
# ./main
123
a = 0, b = 0
#

# ./main
|123|456|
a = 123, b = 456
#
 */
