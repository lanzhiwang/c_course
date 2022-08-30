#include <stdio.h>

int main()
{
    int k = 2;
    int a = 1;
    
    k = k++ + k++;
    
    printf("k = %d\n", k);
    
    if( a-- && a )
    {
        printf("a = %d\n", a);
    }
    
    return 0;
}

