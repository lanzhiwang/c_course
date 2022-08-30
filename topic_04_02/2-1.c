#include <stdio.h>
#include <malloc.h>

int reset(char**p, int size, int new_size)
{
    int ret = 1;
    int i = 0;
    int len = 0;
    char* pt = NULL;
    char* tmp = NULL;
    char* pp = *p;
    
    if( (p != NULL) && (new_size > 0) )
    {
        pt = (char*)malloc(new_size);
        
        tmp = pt;
        
        len = (size < new_size) ? size : new_size;
        
        for(i=0; i<len; i++)
        {
            *tmp++ = *pp++;      
        }
        
        free(*p);
        *p = pt;
    }
    else
    {
        ret = 0;
    }
    
    return ret;
}

int main()
{
    char* p = (char*)malloc(5);
    
    printf("%0X\n", p);
    
    if( reset(&p, 5, 3) )
    {
        printf("%0X\n", p);
    }
    
    return 0;
}
