#include "test.h"
#include "global.h"

/*
global.h  <--  test.h  -->  stdio.h
   ^              ^            ^
   |              |            |
                3-1.c
*/

int main()
{
    f();
    return 0;
}