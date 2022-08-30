#include <stdio.h>

#define SWAP1(a,b) \
{                  \
    int temp = a;  \
    a = b;         \
    b = temp;      \
}

#define SWAP2(a,b) \
{                  \
    a = a + b;     \
    b = a - b;     \
    a = a - b;     \
}

#define SWAP3(a,b) \
{                  \
    a = a ^ b;     \
    b = a ^ b;     \
    a = a ^ b;     \
}

int main()
{
    int a = 1;
    int b = 2;
    
    SWAP1(a,b);
    SWAP2(a,b);
    SWAP3(a,b);
    
    return 0;
}
