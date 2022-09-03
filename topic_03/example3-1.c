#include <stdio.h>

// #define C 1
// gcc -E -DC=0 example3-1.c

int main()
{
    #if( C == 1 )
        printf("This is first printf...\n");
    #else
        printf("This is second printf...\n");
    #endif

    return 0;
}
