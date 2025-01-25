#include <stdio.h>
#include <stdlib.h>

/**

Dynamic memory management

malloc	Allocate memory block (function)
free	Deallocate memory block (function)
calloc	Allocate and zero-initialize array (function)
realloc	Reallocate memory block (function)

 */

int main(void)
{
	int num = 5;

	int *ptr = NULL;
	ptr = (int *)malloc(num * sizeof(int));
	if (NULL != ptr)	// 判断 ptr 指针是否为空
	{
		int i = 0;
		for (i = 0; i < num; i++) {
			// *ptr = i + 1;
			// ptr++;
			*(ptr + i) = i + 1;
		}
		for (i = 0; i < num; i++) {
			printf("%d ", *(ptr + i));
		}

	}
	printf("\n");
	free(ptr);		// 释放 ptr 所指向的动态内存
	ptr = NULL;		// 是否有必要?
	return 0;
}

/**

$ ./main
1 2 3 4 5
$

 */
