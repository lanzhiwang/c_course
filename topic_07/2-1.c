#include <stdio.h>

void main()
{
    int TestArray[5][5] = { {11,12,13,14,15},
                            {16,17,18,19,20},
                            {21,22,23,24,25},
                            {26,27,28,29,30},
                            {31,32,33,34,35}
                          };
    int* p1 = (int*)(&TestArray + 1);
    int* p2 = (int*)(*(TestArray + 1) + 6);

    printf("Result: %d; %d; %d; %d; %d\n", *(*TestArray), *(*(TestArray + 1)), 
                                           *(*(TestArray + 3) + 3), p1[-8], 
                                           p2[4]);
}

