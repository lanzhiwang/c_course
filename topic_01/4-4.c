#include <stdio.h>

/*
extern 用于声明外部定义的变量和函数
extern 用于"告诉"编译器用 C 方式编译

C++ 编译器和一些变种 C 编译器默认会按"自己"的方式编译函数和变量,
通过 extern 关键可以命令编译器"以标准 C 方式进行编译"
*/

// g++ -Wall 4-4.c test2.c
/*
extern "C"
{
    int add(int a, int b)
    {
        return a + b;
    }
}
*/

extern int g;
extern int get_min(int a, int b);

int main()
{
    printf("%d\n", g);
    printf("%d\n", get_min(20, 30));
    return 0;
}
