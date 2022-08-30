#include <stdio.h>
#include <stdarg.h>

float average(int n, ...)
{
    va_list args;
    int i = 0;
    float sum = 0;
    
    va_start(args, n);
    
    for(i=0; i<n; i++)
    {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    
    return sum / n;
}

int main()
{
    printf("%f\n", average(5, 1, 2, 3, 4, 5));
    printf("%f\n", average(4, 1, 2, 3, 4));
    
    return 0;
}

