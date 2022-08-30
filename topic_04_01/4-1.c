#include <stdio.h>
#include <assert.h>

size_t strlen(const char* s)
{
    return ( assert(s), (*s ? (strlen(s+1) + 1) : 0) );
}

int main()
{
    printf("%d\n", strlen( NULL));
    
    return 0;
}

