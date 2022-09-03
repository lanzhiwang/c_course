#include <stdio.h>

#include "test.h"

int main()
{
    int c = max(LOW, HIGH); // Call max to get the larger number
    printf("%d\n", c);

    return 0;
}
