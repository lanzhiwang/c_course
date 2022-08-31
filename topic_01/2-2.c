#include <stdio.h>

/*
error: file-scope declaration of 'g' specifies 'auto'
全局变量只能放在堆上, 也就是只能在全局静态数据区
auto 只能修饰局部变量
*/
// auto int g = 0;

/*
error: register name not specified for 'm'
register 只能修饰局部变量
*/
// register int m = 0;

int main()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    printf("%0x\n", &i);
    // printf("%0x\n", &j);  // error: address of register variable 'j' requested
    printf("%0x\n", &k);

    return 0;
}