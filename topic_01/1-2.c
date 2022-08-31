#include <stdio.h>

typedef int INT32;
typedef unsigned char BYTE;
typedef struct _demo
{
    short s;
    BYTE b1;
    BYTE b2;
    INT32 i;
} DEMO;

int main()
{
    INT32 i32;
    BYTE byte;
    DEMO d;
    printf("%d, %d\n", sizeof(INT32), sizeof(i32));
    printf("%d, %d\n", sizeof(BYTE), sizeof(byte));
    printf("%d, %d\n", sizeof(DEMO), sizeof(d));

    return 0;
}

/*
4, 4
1, 1
8, 8
*/
