#include <stdio.h>

/*
sizeof 是编译器的内置指示符，不是函数
sizeof 用于"计算"相应实体所占的内存大小
sizeof 的值在编译期就已经确定
*/

int main()
{
    int a;

    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof a);
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(char));

    return 0;
}