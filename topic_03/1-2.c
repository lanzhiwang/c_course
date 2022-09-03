#include <stdio.h>

#define SUM(a, b) (a) + (b)
#define SUB(a, b) a - b
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DIM(array) (sizeof(array) / sizeof(*array))

int sum(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int dim(int array[])
{
    // printf("=============\n");
    // printf("%d\n", sizeof(array));  // 8
    // printf("%d\n", sizeof(*array));  // 4
    // printf("=============\n");
    return sizeof(array) / sizeof(*array);
}

int main()
{
    int i = 1;
    int j = 5;
    int a[] = {1, 2, 3};
    printf("%d\n", SUM(1, 2));  // 3
    printf("%d\n", MAX(1, 2));  // 2
    printf("%d\n", SUM(1, 2) * SUM(1, 2));  // 5
    printf("%d\n", SUB(2, 1));  // 1
    printf("%d\n", SUM(i++, j));  // 6
    printf("%d\n", MAX(i++, j));  // 5
    printf("%d\n", DIM(a));  // 3

    /*
    printf("%d\n", (1) + (2));
    printf("%d\n", ((1) > (2) ? (1) : (2)));
    printf("%d\n", (1) + (2) * (1) + (2));
    printf("%d\n", 2 - 1);
    printf("%d\n", (i++) + (j));
    printf("%d\n", ((i++) > (j) ? (i++) : (j)));
    printf("%d\n", (sizeof(a) / sizeof(*a)));
    */

    printf("%d\n", max(i++, j));  // 5

    printf("***************\n");
    printf("%d\n", sizeof(a));  // 12
    printf("%d\n", sizeof(*a));  // 4
    printf("%d\n", dim(a));  // 2
    printf("***************\n");

    return 0;
}
