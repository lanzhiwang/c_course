#include <stdio.h>
#include <malloc.h>

typedef struct _soft_array
{
    int len;
    int array[];
}SoftArray;

int main()
{  
    int i = 0;
    SoftArray* sa = (SoftArray*)malloc(sizeof(SoftArray) + sizeof(int) * 10);
    
    sa->len = 10;
    
    for(i=0; i<sa->len; i++)
    {
        sa->array[i] = i + 1;
    }
    
    for(i=0; i<sa->len; i++)
    {
        printf("%d\n", sa->array[i]);   
    }
    
    free(sa);
    
    return 0;
}