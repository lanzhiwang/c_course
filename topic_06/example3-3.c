#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int _min_(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int i = 1;
    int j = 10;
    
    printf("%d\n", mul(add(1, 2), add(3, 4)));
    printf("%d\n", _min_(i++, j));
    
    return 0;
}

