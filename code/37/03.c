#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
	int i = 2;
	int j = i++;
	printf("i = %d j = %d\n", i, j);	// i = 3 j = 2

	int a = 2;
	int b = 3;
	int m = MAX(a++, b++);	// int m = ((a++) > (b++) ? (a++) : (b++));
	printf("%d\n", m);	// 4
	printf("a = %d b = %d\n", a, b);	// a = 3 b = 5

	// int m = ((a++) > (b++) ? (a++) : (b++));
	//            2   >   3
	//           a = 3 b = 4

	return 0;
}
