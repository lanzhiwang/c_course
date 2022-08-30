#include <stdio.h>
#include <malloc.h>

void printArray(int a[], int size)
{
    int i = 0;
    
    printf("printArray: %d\n", sizeof(a));

    for(i=0; i<size; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int* p = &a[0][0];
    
    printArray(p, 9);
    
    return 0;
}
