#include <stdio.h>

/**
编译 02.c 成汇编
gcc -v -Wall -c 02.c -o 02.o

编译 sum.c 成汇编
gcc -v -Wall -c sum.c -o sum.o

链接
gcc -v -Wall 02.o sum.o -o main

./main
2016
hello bit.

 */

extern void print(char *str);	// extern 关键字指示 print 函数是外部定义
extern int g_val;

int main(void)
{

	printf("%d\n", g_val);
	print("hello bit.\n");
	return 0;
}
