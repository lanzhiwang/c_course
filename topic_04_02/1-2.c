#include <stdio.h>
#include <string.h>

int lookup_keyword(const char* key, const char* table[], const int size)
{
    int ret = -1;
    
    int i = 0;
    
    for(i=0; i<size; i++)
    {
        if( strcmp(key, table[i]) == 0 )
        {
            ret = i;
            break;
        }
    }
    
    return ret;
}

#define DIM(a) (sizeof(a)/sizeof(*a))

int main()
{
    const char* keyword[] = {
            "do",
            "for",
            "if",
            "register",
            "return",
            "switch",
            "while",
            "case",
            "static"
    };
    
    printf("%d\n", lookup_keyword("return", keyword, DIM(keyword)));
    printf("%d\n", lookup_keyword("main", keyword, DIM(keyword)));
}

