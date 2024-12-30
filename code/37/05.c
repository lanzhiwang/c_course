#include <stdio.h>
#include <stdlib.h>

#define MALLOC(num, type) (type*)malloc((num) * sizeof(type))

int main(void)
{
	printf("%d\n", sizeof(int));	// 4

	int *p1 = (int *)malloc(10 * sizeof(int));
	if (p1 == NULL) {
		perror("malloc");
		return 1;
	}
	printf("%d\n", sizeof(p1));

	int *p2 = MALLOC(10, int);	// int* p2 = (int*)malloc((10) * sizeof(int));
	if (p2 == NULL) {
		perror("malloc");
		return 1;
	}
	printf("%d\n", sizeof(p2));

	return 0;
}
