#include <stdio.h>

int main(void)
{
	int i = 0;
	float x = 0.0;
	int n = scanf("%d%f", &i, &x);
	printf("i = %d, x = %e\n", i, x);
	printf("n = %d\n", n);

	return 0;
}

/**
# ./main
      -13.45e12# 0
i = -13, x = 4.500000e+11
n = 2
#
 */
