#include <stdio.h>
#include <malloc.h>

int main()
{
    int i = 0;
    int* pI = (int*)malloc(5 * sizeof(int));
    short* pS = (short*)calloc(5, sizeof(short));
    
    for(i=0; i<5; i++)
    {
        printf("pI[%d] = %d, pS[%d] = %d\n", i, pI[i], i, pS[i]);
    }
    
    pI = (int*)realloc(pI, 10);
    
    for(i=0; i<10; i++)
    {
        printf("pI[%d] = %d\n", i, pI[i]);
    }
    
    free(pI);
    free(pS);
    
    return 0;
}