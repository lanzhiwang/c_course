#include <stdio.h>

int main()
{
    int i = -2;
    unsigned int j = 1;
    
    if( (i + j) >= 0 )
    {
        printf("i+j>=0\n");
    }
    else
    {
        printf("i+j<0\n");
    }
    
    printf("i+j=%d\n", i + j);
    
    return 0;
}
