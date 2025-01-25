/**
函数

函数无参数和无返回值

 */

#include <stdio.h>

void menu(void)
{
	printf("*******************************\n");
	printf("*******   1. paly   ***********\n");
	printf("*******   0. exit   ***********\n");
	printf("*******************************\n");
}

int main(void)
{
	// 函数声明中参数为空, 还是可以使用参数进行调用
	// void
	menu();
	printf("\n");
	// menu(123);  // error: too many arguments to function 'menu'
	// printf("\n");
	// menu("abc", 123);  // error: too many arguments to function 'menu'
	// printf("\n");
	return 0;

}

/**

$ ./main
*******************************
*******   1. paly   ***********
*******   0. exit   ***********
*******************************

$

 */
