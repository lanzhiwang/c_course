#include <stdio.h>
#include <malloc.h>

int func(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n);
    
    do
    {
        if( NULL == p ) break;
        
        if( n < 0 ) break;
        
        for(i=0; i<n; i++)
        {
            p[i] = i;
            printf("%d\n", p[i]);
        }
        
        ret = 1;
    }while(0);
    
    free(p);
    
    return ret;
}

int main()
{
    if( func(10) )
    {
        printf("OK");
    }
    else
    {
        printf("ERROR");
    }
}