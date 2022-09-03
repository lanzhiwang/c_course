#include <stdio.h>

/*
union 和 struct 的区别

struct 中的每个域在内存中都独立分配空间
union 只分配最大域的空间，所有域共享这个空间
*/

struct A
{
    int a;
    int b;
    int c;
};

union B
{
    int a;
    int b;
    int c;
};

int main()
{
    printf("%ld\n", sizeof(struct A));  // 12
    printf("%ld\n", sizeof(union B));  // 4
    return 0;
}
