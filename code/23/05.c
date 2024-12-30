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
	// int ret = menu();  // error: void value not ignored as it ought to be
	// printf("ret = %d\n", ret);
	menu();
	return 0;

}

/**

# ./main
*******************************
*******   1. paly   ***********
*******   0. exit   ***********
*******************************
#

 */
