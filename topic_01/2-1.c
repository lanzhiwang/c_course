#include <stdio.h>

/*
C 语言中的变量可以有自己的属性
在定义变量的时候可以加上"属性"关键字
"属性"关键字指明变量的特有意义
"属性"主要有: auto static register

auto 即 C 语言中局部变量的默认属性
编译器默认所有的局部变量都是 auto 的
auto 指明局部变量是在"栈"上分配空间

static 关键字指明变量的"静态"属性
static 关键同时具有"作用域限定符"的意义
static 修饰的局部变量存储在"程序静态区"
static 的另一个意义是文件作用域标示符
    static 修饰的全局变量作用域只是声明的文件中
    static 修饰的函数作用域只是声明的文件中

register 关键字指明将变量存储于"寄存器"中
register 只是请求寄存器变量，但不一定请求成功
register 变量的必须是 CPU 寄存器可以接受的值
不能用 & 运算符获取 register 变量的地址
*/

int main()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;

    return 0;
}