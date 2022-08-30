#include <stdio.h>

int main()
{
    int a[5][5];
    int(*p)[4];
    
    p = a;
    
    printf("%d\n", &p[4][2] - &a[4][2]);
}

