/**
void* 指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

void* 指针可以理解为无具体类型的指针(或者叫泛型指针), 这种类型的指针可以用来接受任意类型的地址.
但是也有局限性, void* 类型的指针不能进行指针的 +- 操作和解引用操作.

在使用 void* 类型的指针时一般先将其转换为特定类型的指针

 */

#include <stdio.h>

////////////////////////  void* 指针  ////////////////////////
int main(void)
{
	int a = 10;
	int *pa = &a;
	// char *pc = &a;  // warning: initialization of 'char *' from incompatible pointer type 'int *' [-Wincompatible-pointer-types]
	char *pc = (char *)(&a);

	void *other = &a;	// void* 类型的指针可以用来接受任意类型的地址
	// *other = 20;  // error: invalid use of void expression  void* 类型的指针不能进行指针的 +- 操作和解引用操作

	return 0;
}

/**

 */
