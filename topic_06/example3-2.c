#include <stdio.h>

#define ADD(a, b) a + b
#define MUL(a, b) a * b
#define _MIN_(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int i = 1;
    int j = 10;
    
    printf("%d\n", MUL(ADD(1, 2), ADD(3, 4)));
    printf("%d\n", _MIN_(i++, j));
    
    return 0;
}

