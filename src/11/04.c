#include <stdio.h>

int main(void)
{
	int a = 10;
	{
		int a = 30;
		int b = 20;
		printf("a = %d, b = %d\n", a, b);	// a = 30, b = 20
	}
	printf("a = %d\n", a);	// a = 10

	return 0;
}
