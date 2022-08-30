#include <stdio.h>
#include <malloc.h>

void f(int* p, int size)
{
    int i = 0;
    
    for(i=0; i<size; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }
    
    free(p);
}

int main()
{
    int* p = (int*)malloc(5 * sizeof(int));
    
    f(p, 5);
    
    free(p); // OOPS!
       
    return 0;
}

