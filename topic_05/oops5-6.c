#include <stdio.h>
#include <malloc.h>

void f(int* p, int size)
{
    int i = 0;
    
    for(i=0; i<size; i++)
    {
        printf("%d\n", p[i]);
    }
    
    free(p);
}

int main()
{
    int* p = (int*)malloc(5 * sizeof(int));
    int i = 0;
    
    f(p, 5);
    
    for(i=0; i<5; i++)
    {
        p[i] = i; // OOPS!
    }
       
    return 0;
}

