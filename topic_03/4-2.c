#include <stdio.h>

#line 14 "Hello.c"

#define CONST_NAME1 "CONST_NAME1"
#define CONST_NAME2 "CONST_NAME2"

void f()
{
    return 0;
}

int main()
{
    printf("%s\n", CONST_NAME1);
    printf("%s\n", CONST_NAME2);
    printf("%d\n", __LINE__);
    printf("%s\n", __FILE__);
    
    f();

    return 0;
}