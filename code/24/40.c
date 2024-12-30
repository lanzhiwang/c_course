/**
数组指针

1. 数组指针
   int (*)[10]
   将 int arr[10] 中的 arr 换成 (*p)
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int (*p)[10] = &arr;

2. 指针数组
   int *[10]
   int *parr[3] = { arr1, arr2, arr3 };

note:
1. [] 优先级高于 *

 */

#include <stdio.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int (*p)[10] = &arr;
	printf("p     = %p\n", p);
	printf("p + 1 = %p\n", p + 1);

	char ch1[5] = { 'a' };
	char (*pc1)[5] = &ch1;
	printf("pc1     = %p\n", pc1);
	printf("pc1 + 1 = %p\n", pc1 + 1);

	char *ch2[5] = { 'a' };
	char *(*pc2)[5] = &ch2;
	printf("pc2     = %p\n", pc2);
	printf("pc2 + 1 = %p\n", pc2 + 1);

	return 0;
}

/**

# ./main
p     = 0x7ffd79adbbb0
p + 1 = 0x7ffd79adbbd8

pc1     = 0x7ffd79adbbab
pc1 + 1 = 0x7ffd79adbbb0

pc2     = 0x7ffd79adbb80
pc2 + 1 = 0x7ffd79adbba8
#

 */
