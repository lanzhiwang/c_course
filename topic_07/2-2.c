#include<stdio.h>

void main()
{
    char* p = "hello world!";
    int a = (int)p;
    short s = 'c';

    printf("%c\n", (long)(*((int*)p)));
    printf("%s\n", a);
    printf("%s\n", &s);
}
