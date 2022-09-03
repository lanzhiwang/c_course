#include <stdio.h>

/*
enum 是一种自定义类型
enum 默认常量在前一个值的基础上依次加 1
enum 类型的变量只能取定义时的离散值, 也就是只能定义为 int 类型

#define 宏常量只是简单的进行值替换，枚举常量是真正意义上的常量
#define 宏常量无法被调试，枚举常量可以
#define 宏常量无类型信息，枚举常量是一种特定类型的常量
*/

// enum Color
// {
//     GREEN,
//     RED,
//     BLUE
// };
// GREEN=0, RED=1, BLUE=2

// enum Color
// {
//     GREEN,
//     RED = 2,
//     BLUE
// };
// GREEN=0, RED=2, BLUE=3

enum Color
{
    GREEN = 3,
    RED,
    BLUE
};
// GREEN=3, RED=4, BLUE=5

int main()
{
    printf("GREEN=%d, RED=%d, BLUE=%d\n", GREEN, RED, BLUE);
    return 0;
}







