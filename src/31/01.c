#include <stdio.h>

/**
联合体(共用体)
 */

union Un {
	char c;
	int i;
};

int main(void)
{
	printf("%ld\n", sizeof(union Un));	// 4

	union Un un;
	printf("%ld\n", &un);	// 140733507933068
	printf("%ld\n", &(un.i));	// 140733507933068
	printf("%ld\n", &(un.c));	// 140733507933068

	/**

	-------------内存的高地址

	-------------
	11(数据的高字节)
	-------------
	22
	-------------
	33
	-------------
	44(数据的低字节)
	------------- -----> un.i

	-------------内存的低地址

	 */
	un.i = 0x11223344;
	printf("%x\n", un.i);	// 11223344
	printf("%x\n", *((char *)(&(un.i)) + 0));	// 44
	printf("%x\n", *((char *)(&(un.i)) + 1));	// 33
	printf("%x\n", *((char *)(&(un.i)) + 2));	// 22
	printf("%x\n", *((char *)(&(un.i)) + 3));	// 11

	un.c = 0x55;
	printf("%x\n", un.i);	// 11223355
	printf("%x\n", *((char *)(&(un.i)) + 0));	// 55
	printf("%x\n", *((char *)(&(un.i)) + 1));	// 33
	printf("%x\n", *((char *)(&(un.i)) + 2));	// 22
	printf("%x\n", *((char *)(&(un.i)) + 3));	// 11

	return 0;
}
