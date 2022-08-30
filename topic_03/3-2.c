#include <stdio.h>

#ifdef DEBUG
    #define LOG(s) printf("[%s:%d] %s\n", __FILE__, __LINE__, s)
#else
    #define LOG(s) NULL
#endif

#ifdef HIGH
void f()
{
    printf("This is the high level product!\n");
}
#else
void f()
{
}
#endif

int main()
{
    LOG("Enter main() ...");
    
    f();
    
    printf("1. Query Information.\n");
    printf("2. Record Information.\n");
    printf("3. Delete Information.\n");
    
    #ifdef HIGH
    printf("4. High Level Query.\n");
    printf("5. Mannul Service.\n");
    printf("6. Exit.\n");
    #else
    printf("4. Exit.\n");
    #endif
    
    LOG("Exit main() ...");
    
    return 0;
}
