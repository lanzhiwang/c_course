#include <stdio.h>

int f1(int a, int b)
{
    #define _MIN_(a, b) ((a) < (b) ? a : b)

    return _MIN_(a, b);
    // return ((a) < (b) ? a : b);

    #undef _MIN_
}

int f2(int a, int b, int c)
{
    return _MIN_(_MIN_(a, b), c);
}

int main()
{
    printf("%d\n", f1(2, 1));
    printf("%d\n", f2(5, 3, 2));

    return 0;
}
