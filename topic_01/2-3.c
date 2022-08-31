#include <stdio.h>

void f1()
{
    int i = 1;
    i++;
    printf("%d\n", i);
}

void f2()
{
    static int i = 1;
    i++;
    printf("%d\n", i);
}

int main()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;

    for(i = 0; i < 5; i++)
    {
        f1();
    }
    printf("=======================\n");

    for(i = 0; i < 5; i++)
    {
        f2();
    }

    return 0;
}

/*
2
2
2
2
2
=======================
2
3
4
5
6
*/
