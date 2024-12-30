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

////////////////////////  取地址操作  ////////////////////////
int main(void)
{
	int a = 10;
	printf("&a = %p\n", &a);	//                   &a = 0x7ffd251c616c
	printf("(&a) + 1 = %p\n", (&a) + 1);	// (&a) + 1 = 0x7ffd251c6170
	return 0;
}

/**

 */
