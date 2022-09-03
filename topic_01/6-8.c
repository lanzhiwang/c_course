#include <stdio.h>

/*
typedef 用于给一个已经存在的数据类型重命名
typedef 并没有产生新的类型
typedef 重定义的类型不能进行 unsigned 和 signed 扩展

typedef 是给已有类型取别名
#define 为简单的字符串替换，无别名的概念

*/

typedef char* PCHAR;

int main()
{
    char c;
    PCHAR p1, p2;
    p1 = &c;
    p2 = &c;

    return 0;
}
