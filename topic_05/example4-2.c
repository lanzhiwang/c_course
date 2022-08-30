#include <stdio.h>
#include <malloc.h>
#include <string.h>

void func(char* p)
{
    printf("%s\n", p);
    free(p);
}

int main()
{
    char* s = (char*)malloc(5);
    
    strcpy(s, "Delphi Tang");
    
    func(s);
    
    printf("%s\n", s); // OOPS!
    
    return 0;
}
