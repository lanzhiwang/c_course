#include <stdio.h>

#define C 1

int main()
{
    #if( C == 1 )
        printf("This is first printf...\n");
    #else
        printf("This is second printf...\n");
    #endif
    
    return 0;
}
