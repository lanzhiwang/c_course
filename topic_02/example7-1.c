#include <stdio.h>
#include <malloc.h>

typedef struct _demo
{
    int* pInt;
    float f;
} Demo;

int func(int v, int m)
{
    return (v & m != 0);
}

int main()
{   
    Demo* pD = (Demo*)malloc(sizeof(Demo));
    int *p[5];
    int *f();
    int i = 0;
    
    i = 1, 2;
    
    *pD.f = 0;
    
    free(pD);
    
    return 0;
}
