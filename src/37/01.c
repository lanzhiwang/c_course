#include <stdio.h>

/**
#define 定义宏
https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Macro-Arguments.html

#define 机制包括了一个规定, 允许把参数替换到文本中, 这种实现通常称为宏(macro)或定义宏(define macro).

下面是宏的申明方式:
#define name( parament-list ) stuff
其中的 parament-list 是一个由逗号隔开的符号表, 它们可能出现在stuff中.
注意:
参数列表的左括号必须与 name 紧邻. 如果两者之间有任何空白存在, 参数列表就会被解释为stuff的一部分.

 */

#define SQUARE1(x) x * x
#define SQUARE2(x) (x) * (x)
#define SQUARE3(X) ((X) * (X))

int main(void)
{
	int a = 5;
	int s1 = SQUARE1(a);	// int s1 = a * a;
	printf("%d\n", s1);	// 25

	int s2 = SQUARE1(a + 1);	// int s2 = a + 1 * a + 1;
	printf("%d\n", s2);	// 11

	int s3 = SQUARE2(a + 1);	// int s3 = (a + 1) * (a + 1);
	printf("%d\n", s3);	// 36

	return 0;
}
