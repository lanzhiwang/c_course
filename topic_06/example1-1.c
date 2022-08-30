#include <stdio.h>

int f(int i, int j)
{
    printf("%d, %d\n", i, j);
}

int main()
{
    int k = 1;
    
    f(k, k++);
    
    printf("%d\n", k);
    
    return 0;
}

