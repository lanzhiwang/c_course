#include <stdio.h>

/*
const int* p;        // p 可变，p 指向的内容不可变
int const* p;        // p 可变，p 指向的内容不可变
int* const p;        // p 不可变，p 指向的内容可变
const int* const p;  // p 和 p 指向的内容都不可变

口诀: 左数右指
当 const 出现在 * 号左边时指针指向的数据为常量
当 const 出现在 * 后右边时指针本身为常量
*/

int main()
{
    int i = 1;
    int j = 2;

    // const int* p = &i;
    // *p = j;  // p 指向的内容不可变  error: assignment of read-only location '*p'
    // p = &j;  // p 本身可变

    // int const* p = &i;
    // *p = j;  // p 指向的内容不可变  error: assignment of read-only location '*p'
    // p = &j;  // p 本身可变

    // int* const p = &i;
    // *p = j;
    // p = &j;  // error: assignment of read-only variable 'p'

    // const int* const p = &i;
    // *p = j;  // error: assignment of read-only location '*(const int *)p'
    // p = &j;  // error: assignment of read-only variable 'p'

}