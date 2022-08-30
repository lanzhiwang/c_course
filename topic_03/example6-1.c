#include <stdio.h>

#define CONVERS(x) #x

int main()
{
    
    printf("%s\n", CONVERS(Hello world!));
    printf("%s\n", CONVERS(100));
    printf("%s\n", CONVERS(while));
    printf("%s\n", CONVERS(return));

    return 0;
}
