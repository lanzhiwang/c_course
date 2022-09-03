#include <stdio.h>

/*
union 的使用受系统大小端的影响

int i = 1
00000001

大端
低地址                           高地址
| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
0   1   2   3   4   5   6   7   8

小端
低地址                           高地址
| 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
0   1   2   3   4   5   6   7   8

*/

union C
{
    int i;
    char c;
};

/*
union C 占用 4 个字节
i = 1
0000 0000 0000 0001

如果系统是大端模式
低地址                           高地址
0000 0000 0000 0001
此时 c = 0

如果系统是小端模式
低地址                           高地址
1000 0000 0000 0000
此时 c = 1

*/

int checkSys()
{
    union check
    {
        int i;
        char c;
    } cc;
    cc.i = 1;
    return cc.c;
}

int main()
{
    printf("%d\n", checkSys());
    return 0;
}
