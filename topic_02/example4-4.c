#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    
    c = a < b ? a : b;
    
    (a < b ? a : b) = 3;
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;
}
