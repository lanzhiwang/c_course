#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int Max(int x, int y)
{
	return (x > y ? x : y);
}

int main(void)
{
	int m = MAX(2, 3);	// int m = ((2) > (3) ? (2) : (3));
	printf("%d\n", m);

	m = Max(2, 3);
	printf("%d\n", m);

	return 0;
}
