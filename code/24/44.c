/**
函数指针

1. 数组指针
   int (*)[10]
   将 int arr[10] 中的 arr 换成 (*p)
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int (*p)[10] = &arr;

2. 指针数组
   int *[10]
   int *parr[3] = { arr1, arr2, arr3 };

3. 函数指针
   int (*)(int, int)

note:
1. [] 优先级高于 *

《C 陷阱和缺陷》
(*(void (*)())0)();

void (*signal(int, void(*)(int)))(int);

( *( void (*)() )0 )();

0  // 常量 0
( void (*)() )0  // 将常量 0 类型转换为函数指针
*( void (*)() )0  // 将函数指针解引用操作得到函数
( *( void (*)() )0 )()  // 调用函数

void ( * signal(int, void(*)(int) ) )(int);

typedef void(*pf_t)(int)
pf_t signal(int, pf_t)

void(*)(int) signal(int, void(*)(int))  // 可以这样理解, 但这种写法是错误的
 */

#include <stdio.h>

int main(void)
{
	return 0;
}

/**

 */
