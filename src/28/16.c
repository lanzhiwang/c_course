/**

memset
void * memset ( void * ptr, int value, size_t num );

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);
	puts(str);

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	memset(arr1, 0, 20);
	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	printf("\n");

	return 0;
}

/**

$ ./main
------ every programmer should know memset!
arr1[0] = 1
arr1[1] = 2
arr1[2] = 3
arr1[3] = 4
arr1[4] = 5
arr1[5] = 6
arr1[6] = 7
arr1[7] = 8
arr1[8] = 9
arr1[9] = 10
arr1[0] = 0
arr1[1] = 0
arr1[2] = 0
arr1[3] = 0
arr1[4] = 0
arr1[5] = 6
arr1[6] = 7
arr1[7] = 8
arr1[8] = 9
arr1[9] = 10

$

 */
