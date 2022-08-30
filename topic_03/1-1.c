// test.h
/*
This is the header file for test.c
*/

#define MAX(a,b) (((a)>(b)) ? (a) : (b))

int g_global = 10;




// test.c
#include "test.h"

#define LOW  0
#define HIGH 255

int max(int a, int b)
{
    return MAX(a,b);
}

int main()
{
    
    int c = max(LOW, HIGH); // Call max to get the larger number

    return 0;
}
