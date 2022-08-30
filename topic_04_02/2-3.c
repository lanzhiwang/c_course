#include <stdio.h>

int main(int argc, char* argv[], char* env[])
{
    int a[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int i = 0;
    int j = 0;
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\n", *(*(a+i) + j));
        }
    }
}

