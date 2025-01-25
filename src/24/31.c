/**
数组名的理解

1. 数组名是数组首元素的地址
2. sizeof(数组名) 表示整个数组的大小, 单位是字节
3. &数组名 表示整个数组的地址(整个数组的地址和数组首元素的地址是有区别的)

&数组名 取出的是数组的地址
&数组名 + 1 的时候跳过了整个数组, 原因是指针类型的差异
&数组名 的类型是"数组指针"类型 int(*)[10], 既 int(*p)[10] = &arr

重点
int (*p)[10] = &arr;	// 数组指针, 将 int arr[10] 中的 arr 换成 (*p)

 */

#include <stdio.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("&(arr[0]) = %p\n", &(arr[0]));	// 数组首元素的地址
	printf("arr       = %p\n", arr);	// 数组名是数组首元素的地址, 既 arr = &(arr[0])
	printf("&arr      = %p\n", &arr);	// 整个数组的地址
	printf("\n");

	printf("&(arr[0]) + 1 = %p\n", &(arr[0]) + 1);
	printf("arr + 1       = %p\n", arr + 1);
	printf("&arr + 1      = %p\n", &arr + 1);	// 整个数组的地址和数组首元素的地址是有区别的
	printf("\n");

	printf("sizeof(&(arr[0])) = %ld\n", sizeof(&(arr[0])));
	printf("sizeof(arr)       = %ld\n", sizeof(arr));
	printf("sizeof(&(arr))    = %ld\n", sizeof(&(arr)));
	printf("\n");

	int (*p)[10] = &arr;	// 数组指针, 将 int arr[10] 中的 arr 换成 (*p)
	printf("p     = %p\n", p);
	printf("p + 1 = %p\n", p + 1);
	return 0;
}

/**

$ ./main
&(arr[0]) = 0x7ffdcb4c43b0
arr       = 0x7ffdcb4c43b0
&arr      = 0x7ffdcb4c43b0

&(arr[0]) + 1 = 0x7ffdcb4c43b4
arr + 1       = 0x7ffdcb4c43b4
&arr + 1      = 0x7ffdcb4c43d8

sizeof(&(arr[0])) = 8
sizeof(arr)       = 40
sizeof(&(arr))    = 8

p     = 0x7ffdcb4c43b0
p + 1 = 0x7ffdcb4c43d8
$

 */
