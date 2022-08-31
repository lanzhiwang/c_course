#include <stdio.h>

/*
在 C 语言中 const 修饰的变量是只读的，其本质还是变量
const 修饰的变量会在内存占用空间
本质上 const 只对编译器有用，在运行时无用
*/

int main()
{
    const int cc = 10;
    int* p = (int*)&cc;

    printf("%d\n", cc);

    *p = 100;

    printf("%d\n", cc);

    return 0;
}

/*
10
100
*/
