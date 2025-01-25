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

note:
1. [] 优先级高于 *

 */

#include <stdio.h>

void test()
{
	printf("hehe\n");
}

int main(void)
{
	test();

	/**
	函数是有地址的
	函数名和 &函数名 都可以获得函数的地址
	 */
	printf("&test = %p\n", &test);
	printf("test  = %p\n", test);

	void (*p1)() = &test;
	void (*p2)() = test;
	printf("p1 = %p\n", p1);
	printf("p2 = %p\n", p2);
	(*p1) ();
	(*p2) ();

	return 0;
}

/**

$ ./main
hehe
&test = 0x401136
test  = 0x401136
p1 = 0x401136
p2 = 0x401136
hehe
hehe
$

 */
