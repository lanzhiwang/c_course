#include <stdio.h>

#define RESET(p, len) while( len > 0) ((char*)p)[--len] = 0

void reset(void* p, int len)
{
    while( len > 0 ) 
    {
        ((char*)p)[--len] = 0;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int len = sizeof(array);
    
    reset(array, len);
    RESET(array, len);
    
    return 0;
}

