#include <stdio.h>
#include <assert.h>

char* strcpy(char* dst, const char* src)
{
    char* ret = dst;
    
    assert(dst && src);
    
    while( (*dst++ = *src++) != '\0' );
    
    return ret;
}

int main()
{
    char dst[20];
    
    printf("%s\n", strcpy(dst, "Delphi Tang!"));
    
    return 0;
}
