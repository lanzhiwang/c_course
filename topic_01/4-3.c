#include <stdio.h>

/*
void 修饰函数返回值和参数
如果函数没有返回值，那么应该将其声明为 void 型
如果函数没有参数，应该声明其参数为 void
void 修饰函数返回值和参数仅为了表示无

不存在 void 变量
C 语言没有定义 void 究竟是多大内存的别名

void 指针的意义
C 语言规定只有相同类型的指针才可以相互赋值
void* 指针作为"左值"用于"接收"任意类型的指针
void* 指针作为"右值"赋值给其它指针时需要强制类型转换
*/

void* my_memset(void* p, char v, int size)
{
    char* dest = (char*)p;
    int i = 0;
    for(i = 0; i < size; i++)
    {
        dest[i] = v;
    }
    return dest;
}

int main()
{
    long l = 1000;
    printf("%ld\n", l);
    my_memset(&l, 0, sizeof(l));
    printf("%ld\n", l);
    return 0;
}

/*
1000
0
*/