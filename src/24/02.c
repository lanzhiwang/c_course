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

////////////////////////  定义指针变量  ////////////////////////
int main(void)
{
	int a = 10;
	printf("&a = %p\n", &a);	// &a = 0x7ffc7d032f4c

	int *pa = &a;
	printf("pa = %p\n", pa);	// pa = 0x7ffc7d032f4c

	char ch = 'w';
	char *pch = &ch;
	printf("&ch = %p\n", &ch);	// &ch = 0x7ffc7d032f4b
	printf("pch = %p\n", pch);	// pch = 0x7ffc7d032f4b

	return 0;
}

/**

$ ./main
&a = 0x7ffc7d032f4c
pa = 0x7ffc7d032f4c
&ch = 0x7ffc7d032f4b
pch = 0x7ffc7d032f4b
$

 */
