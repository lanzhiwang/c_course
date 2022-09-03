#include <stdio.h>

void f()
{
    printf("%s:%d enter f()...\n", __FILE__, __LINE__);
    printf("%s:%d exit f()...\n", __FILE__, __LINE__);
}

int main()
{
    printf("%s:%d enter main()...\n", __FILE__, __LINE__);
    f();
    printf("%s:%d exit main()...\n", __FILE__, __LINE__);

    return 0;
}