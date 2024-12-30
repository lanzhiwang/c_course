#include <stdio.h>

#define DOUBLE(X) ((X) + (X))
#define M 100

int main(void)
{
	int r = 10 * DOUBLE(M + 3);	// int r = 10 * ((100 + 3) + (100 + 3));

	printf("%d\n", r);	// 2060

	return 0;
}
