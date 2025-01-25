/**
函数指针

1. 数组指针
   int (*)[10]
   将 int arr[10] 中的 arr 换成 (*p)
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int (*p)[10] = &arr;

2. 指针数组
   int *[10]
   int *parr[3] = { arr1, arr2, arr3 };

3. 函数指针
   int (*)(int, int)

note:
1. [] 优先级高于 *

 */

#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int main(void)
{
	int a = 10;
	int b = 11;
	int r = add(a, b);
	printf("r = %d\n", r);

	/**
	函数是有地址的
	函数名和 &函数名 都可以获得函数的地址
	 */
	printf("&add = %p\n", &add);
	printf("add  = %p\n", add);

	int (*p1)(int, int) = &add;
	int (*p2)(int, int) = add;
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	r = (*p1) (5, 6);
	printf("r = %d\n", r);
	r = p2(7, 8);
	printf("r = %d\n", r);

	return 0;
}

/**

$ ./main
r = 21
&add = 0x401126
add  = 0x401126
p1 = 0x401126
p2 = 0x401126
r = 11
r = 15
$

 */
