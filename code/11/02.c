#include <stdio.h>

/**
# 程序块
C 语言中对成对大括号构成的代码叫做程序块(也叫复合语句)

# 作用域
作用域是指变量生效的范围

* 文件作用域
* 块作用域

 */

int main(void)
{
	{
		int a = 10;
		printf("a = %d\n", a);	// a = 10
	}
	printf("a = %d\n", a);
	return 0;
}

/**
02.c: In function 'main':
02.c:21:28: error: 'a' undeclared (first use in this function)
   21 |         printf("a = %d\n", a);
      |                            ^
 */
