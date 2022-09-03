#include <stdio.h>

int main()
{
    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", __STDC__);
    /*
    example2-1-2.c
    6
    Sep  2 2022
    13:35:33
    1
    */

    return 0;
}