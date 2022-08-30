#include <stdio.h>

// another file
// char* p = "Hello World!";

extern char p[];

int main()
{
    printf("%s\n", p);
    
    return 0;
}
