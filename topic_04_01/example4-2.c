#include <stdio.h>
#include <assert.h>

size_t strlen(const char* s)
{
    size_t length = 0;
    
    assert(s);
    
    while( *s++ )
    {
        length++;
    }
    
    return length;
}

int main()
{
    printf("%d\n", strlen("123456789"));
    
    return 0;
}

