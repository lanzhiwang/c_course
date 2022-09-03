#include <stdio.h>

#define CALL(f, p) (printf("Call function %s\n", #f), f(p))

int square(int n)
{
    return n * n;
}

int f(int x)
{
    return x;
}

int main()
{

    printf("1. %d\n", CALL(square, 4));
    printf("2. %d\n", CALL(f, 10));

    return 0;
}

/*
Call function square
1. 16
Call function f
2. 10
*/
