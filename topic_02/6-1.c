#include <stdio.h>

int main()
{   
    int i = 0;
    int j = ++i+++i+++i;
    
    int a = 1;
    int b = 2;
    int c = a+++b;
    
    int* p = &a;
    
    b = b/*p;
      
    return 0;
}
