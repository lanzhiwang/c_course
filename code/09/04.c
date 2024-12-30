#include <stdio.h>

int main(void)
{
	int len = 0;
	while (getchar() != '\n') {
		len++;
	}
	printf("len = %d\n", len);

	return 0;
}

/**
# ./main
abcdefg
len = 7
#
 */
