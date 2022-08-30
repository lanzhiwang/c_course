#include <stdio.h>

#define SWAP(a,b) \
{                 \
    int temp = a; \
    a = b;        \
    b = temp;     \
}

int main()
{
    int a = 1;
    int b = 2;
    
    SWAP(a,b);
    
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}
