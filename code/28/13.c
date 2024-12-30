/**

memcpy 内存块拷贝
void * memcpy ( void * destination, const void * source, size_t num );

memmove 如果 source 和 destination 有重叠的话, 使用 memmove 进行拷贝
void * memmove ( void * destination, const void * source, size_t num );

 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

void *my_memcpy(void *destination, const void *source, size_t num)
{
	assert(source && destination);
	void *result = destination;
	while (num--) {
		*(char *)destination = *(char *)source;
		source = (char *)source + 1;
		destination = (char *)destination + 1;
	}
	return result;
}

int main(void)
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	for (size_t i = 0; i < 10; i++) {
		printf("arr2[%ld] = %d\n", i, arr2[i]);
	}
	printf("\n");

	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	my_memcpy(arr1 + 2, arr1, 20);
	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	printf("\n");

	return 0;
}

/**

# ./main
arr2[0] = 1
arr2[1] = 2
arr2[2] = 3
arr2[3] = 4
arr2[4] = 5
arr2[5] = 0
arr2[6] = 0
arr2[7] = 0
arr2[8] = 0
arr2[9] = 0

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
arr1[0] = 1
arr1[1] = 2
arr1[2] = 1
arr1[3] = 2
arr1[4] = 1
arr1[5] = 2
arr1[6] = 1
arr1[7] = 8
arr1[8] = 9
arr1[9] = 10

#

 */
