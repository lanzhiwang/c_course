#include <stdio.h>

typedef int(AINT5)[5];
typedef float(AFLOAT10)[10];
typedef char(ACHAR9)[9];

int main()
{
    AINT5 a1;
    float fArray[10];
    AFLOAT10* pf = &fArray;
    ACHAR9 cArray;
    char(*pc)[9] = &cArray;
    char(*pcw)[4] = cArray;
    
    int i = 0;
    
    printf("%d, %d\n", sizeof(AINT5), sizeof(a1));
    
    for(i=0; i<10; i++)
    {
        (*pf)[i] = i;
    }
    
    for(i=0; i<10; i++)
    {
        printf("%f\n", fArray[i]);
    }
    
    printf("%0X, %0X, %0X\n", &cArray, pc+1, pcw+1);
}

