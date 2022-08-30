// test.c

#include <stdio.h>

/*
extern "C"
{
    int add(int a, int b)
    {
        return a + b;
    }
}
*/

extern int g;
extern int get_min(int a, int b);

int main()
{  
    return 0;
}

// test2.c
int g = 100;

int get_min(int a, int b)
{
    return (a < b) ? a : b;
}
