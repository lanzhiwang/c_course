#include <stdio.h>

int g = 0;

int f()
{
    return g++;
}

int main()
{
    if( f() && f() )
    {
        printf("%d\n", g);
    }
    
    printf("%d\n", g);
    
    return 0;
}
