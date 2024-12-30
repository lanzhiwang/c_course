/**
指针类型的意义

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

指针类型的意义
1. 指针的类型决定了对指针解引用的时候有多大的权限(一次能操作几个字节)
比如, char * 的指针的解引用就只能访问一个字节, 而 int * 的指针的解引用就能访问四个字节

2. 指针的类型决定了指针 +1 / -1 操作的步长
比如, char * 的指针 +1 向前增加一个字节, 而 int * 的指针 +1 向前增加四个字节

-------------

-------------内存的高地址

-------------
11(数据的高字节)
-------------
22
-------------
33
-------------
44(数据的低字节)
------------- -----> b

-------------内存的低地址

 */

#include <stdio.h>

////////////////////////  指针类型的意义  ////////////////////////
int main(void)
{
	printf("sizeof(int) = %ld\n", sizeof(int));	// sizeof(int) = 4

	int n = 0x11223344;
	printf("n = %08x\n", n);	// n = 11223344
	printf("n = %08x\n", *(((char *)(&n)) + 0));	// n = 00000044
	printf("n = %08x\n", *(((char *)(&n)) + 1));	// n = 00000033
	printf("n = %08x\n", *(((char *)(&n)) + 2));	// n = 00000022
	printf("n = %08x\n", *(((char *)(&n)) + 3));	// n = 00000011
	printf("\n");

	int *p1 = &n;
	printf("p1     = %p\n", p1);	//     p1     = 0x7ffffdad4d2c
	printf("p1 + 1 = %p\n", p1 + 1);	// p1 + 1 = 0x7ffffdad4d30
	*p1 = 0x55667788;
	printf("n = %08x\n", n);	// n = 55667788
	printf("n = %08x\n", *(((char *)(&n)) + 0));	// n = ffffff88
	printf("n = %08x\n", *(((char *)(&n)) + 1));	// n = 00000077
	printf("n = %08x\n", *(((char *)(&n)) + 2));	// n = 00000066
	printf("n = %08x\n", *(((char *)(&n)) + 3));	// n = 00000055
	printf("\n");

	char *p2 = (char *)(&n);
	printf("p2     = %p\n", p2);	//     p2     = 0x7ffffdad4d2c
	printf("p2 + 1 = %p\n", p2 + 1);	// p2 + 1 = 0x7ffffdad4d2d
	printf("p2 + 2 = %p\n", p2 + 2);	// p2 + 2 = 0x7ffffdad4d2e
	printf("p2 + 3 = %p\n", p2 + 3);	// p2 + 3 = 0x7ffffdad4d2f
	printf("p2 + 4 = %p\n", p2 + 4);	// p2 + 4 = 0x7ffffdad4d30
	printf("p2 + 5 = %p\n", p2 + 5);	// p2 + 5 = 0x7ffffdad4d31
	*p2 = 0x99;
	printf("n = %08x\n", *p2);	// n = ffffff99
	printf("n = %08x\n", *(p2 + 1));	// n = 00000077
	printf("n = %08x\n", *(p2 + 2));	// n = 00000066
	printf("n = %08x\n", *(p2 + 3));	// n = 00000055
	printf("n = %08x\n", n);	// n = 55667799
	printf("n = %08x\n", *(((char *)(&n)) + 0));	// n = ffffff99
	printf("n = %08x\n", *(((char *)(&n)) + 1));	// n = 00000077
	printf("n = %08x\n", *(((char *)(&n)) + 2));	// n = 00000066
	printf("n = %08x\n", *(((char *)(&n)) + 3));	// n = 00000055

	return 0;

}

/**

# ./main
sizeof(int) = 4
n = 11223344
n = 00000044
n = 00000033
n = 00000022
n = 00000011

p1     = 0x7ffffdad4d2c
p1 + 1 = 0x7ffffdad4d30
n = 55667788
n = ffffff88
n = 00000077
n = 00000066
n = 00000055

p2     = 0x7ffffdad4d2c
p2 + 1 = 0x7ffffdad4d2d
p2 + 2 = 0x7ffffdad4d2e
p2 + 3 = 0x7ffffdad4d2f
p2 + 4 = 0x7ffffdad4d30
p2 + 5 = 0x7ffffdad4d31
n = ffffff99
n = 00000077
n = 00000066
n = 00000055
n = 55667799
n = ffffff99
n = 00000077
n = 00000066
n = 00000055
#

 */
