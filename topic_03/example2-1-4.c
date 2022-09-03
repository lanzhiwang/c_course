#include <stdio.h>

void Log(char* s)
{
    printf("%s:%d %s\n", __FILE__, __LINE__, s);
}
void f()
{
    printf("%s:%d enter f()...\n", __FILE__, __LINE__);
    printf("%s:%d exit f()...\n", __FILE__, __LINE__);
}

int main()
{
    Log("enter main()...");
    f();
    Log("exit main()...");

    return 0;
}

/*
example2-1-4.c:5 enter main()...
example2-1-4.c:9 enter f()...
example2-1-4.c:10 exit f()...
example2-1-4.c:5 exit main()...
*/
