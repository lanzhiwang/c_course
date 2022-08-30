#include <stdio.h>

int func(int x)
{
    if( x > 1 )
    {
        return x * func(x - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("x! = %d\n", func(4));
    
    return 0;
}

