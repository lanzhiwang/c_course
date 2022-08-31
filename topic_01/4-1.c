#include <stdio.h>

void func(int n)
{
    int* p = NULL;

    if( n < 0 )
    {
        goto STATUS;
    }

    p = malloc(sizeof(int) * n);

STATUS:
    p[0] = n;
}

int main()
{
    func(1);
    func(-1);

    return 0;
}