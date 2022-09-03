#include <stdio.h>
#include <time.h>

#define LOG(s) do {                                                \
    time_t t;                                                      \
    struct tm* ti;                                                 \
    time(&t);                                                      \
    ti = localtime(&t);                                            \
    printf("%s [%s:%d] %s\n", asctime(ti), __FILE__, __LINE__, s); \
} while(0)

void f()
{
    time_t t;
    struct tm* ti;
    time(&t);
    ti = localtime(&t);
    printf("%s", asctime(ti));

    printf("%s:%d enter f()...\n", __FILE__, __LINE__);
    printf("%s:%d exit f()...\n", __FILE__, __LINE__);
}

int main()
{
    LOG("enter main()...");
    f();
    LOG("exit main()...");

    return 0;
}

/*
example2-1-5.c:12 enter main()...
example2-1-5.c:6 enter f()...
example2-1-5.c:7 exit f()...
example2-1-5.c:14 exit main()...
*/
