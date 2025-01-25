/**
指针

bit 比特位
byte 字节
KB
MB
GB
TB
PB

bit 比特位
1 byte = 8 bit
1 KB = 1024 byte
1 MB = 1024 KB
1 GB = 1024 MB
1 TB = 1024 GB
1 PB = 1024 TB

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

 */

#include <stdio.h>

////////////////////////  指针变量的大小  ////////////////////////
int main(void)
{
	int a = 10;
	printf("&a = %p\n", &a);	// &a = 0x7fff43b85a1c

	int *pa = &a;
	printf("pa = %p\n", pa);	// pa = 0x7fff43b85a1c

	char ch = 'w';
	char *pch = &ch;
	printf("ch = %c\n", ch);	// ch = w
	// 解引用操作
	printf("ch = %c\n", *pch);	// ch = w

	*pch = 'm';
	printf("ch = %c\n", ch);	// ch = m
	printf("ch = %c\n", *pch);	// ch = m

	// 指针变量的大小
	printf("sizeof(pa) = %ld\n", sizeof(pa));	// sizeof(pa) = 8
	printf("sizeof(int *) = %ld\n", sizeof(int *));	// sizeof(int *) = 8
	printf("sizeof(pch) = %ld\n", sizeof(pch));	// sizeof(pch) = 8
	printf("sizeof(char *) = %ld\n", sizeof(char *));	// sizeof(char *) = 8

	return 0;
}

/**

$ ./main
&a = 0x7fff43b85a1c
pa = 0x7fff43b85a1c
ch = w
ch = w
ch = m
ch = m
sizeof(pa) = 8
sizeof(int *) = 8
sizeof(pch) = 8
sizeof(char *) = 8
$

 */
