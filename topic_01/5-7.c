#include <stdio.h>

/*
const 修饰函数参数表示在函数体内不希望改变参数的值
const 修饰函数返回值表示返回值不可改变，多用于返回指针的情形
*/

const int* func()
{
    static int count = 0;
    count++;
    return &count;
}

int main()
{
    int* p = func();  // warning: initialization discards 'const' qualifier from pointer target type [-Wdiscarded-qualifiers]
    printf("%d\n", *p);  // 1

}