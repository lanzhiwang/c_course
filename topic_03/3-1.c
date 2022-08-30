// global.h
int global = 10;

// test.h
#include <stdio.h>
#include "global.h"

const char* NAME = "Hello world!";

void f()
{
    printf("Hello world!\n");
}

// test.c
#include <stdio.h>
#include "test.h"
#include "global.h"

int main()
{
    f();
    
    printf("%s\n", NAME);
    
    return 0;
}