#include <stdio.h>
#include <malloc.h>

#define MALLOC(type, n) (type*)malloc(n * sizeof(type))

int main()
{
    int* p = MALLOC(int, 5);
    
    int i = 0;
    
    for(i=0; i<5; i++)
    {
        p[i] = i + 1;
        
        printf("%d\n", p[i]);
    }
    
    free(p);
    
    return 0;
}

