#include <stdio.h>

void access(int a[][3], int row)
{
    int col = sizeof(*a) / sizeof(int);
    int i = 0;
    int j = 0;
    
    printf("sizeof(a) = %d\n", sizeof(a));
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\n", a[i][j]);
        }
    }
}

int main()
{
    int a[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    
    access(a, 3);
}

