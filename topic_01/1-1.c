#include <stdio.h>

int main()
{
    char c = 0;
    short s = 0;
    int i = 0;
    
    printf("%d, %d\n", sizeof(char), sizeof(c));
    printf("%d, %d\n", sizeof(short), sizeof(s));
    printf("%d, %d\n", sizeof(int), sizeof(i));
    
    return 0;
}