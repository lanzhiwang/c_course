#include <stdio.h>

/*
volatile 可理解为"编译器警告指示字"
volatile 用于告诉编译器必须每次去内存中取变量值
volatile 主要修饰可能被多个线程访问的变量
volatile 也可以修饰可能被未知因数更改的变量

*/

int main()
{
    /*
    编译器在编译的时候发现 obj 没有被当成左值使用，因此会"聪明"的直接将 obj 替换成 10，而把 a 和 b 都赋值为 10
    如果我们期望在 sleep 100 的过程中有其他线程或者硬件中断去改变 obj 的值，从而改变 b 的值，编译器的这种优化就
    会使这种想法失效

    如果要实现这种想法，需要将 obj 使用 volatile 关键字
    */
    int obj = 10;
    int a = 0;
    int b = 0;

    a = obj;
    sleep(10);
    b = obj;
    printf("a = %d, b = %d\n", a, b);
}
