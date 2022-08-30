#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    
    if( ++i > 0 || ++j > 0 )
    {
        printf("%d\n", i);
        printf("%d\n", j);
    }
    
    return 0;
}
