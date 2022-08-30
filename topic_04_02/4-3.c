#include <stdio.h>

int main()
{ 
    int (*p2)(int*, int (*f)(int*));
    
    int (*p3[5])(int*);
    
    int (*(*p4)[5])(int*);
    
    int (*(*p5)(int*))[5];
}

