#include <stdio.h>
#include <malloc.h>

int main()
{
    char* s = (char*)malloc(10);
    
    printf(s); // OOPS!
    
    free(s);
       
    return 0;
}

