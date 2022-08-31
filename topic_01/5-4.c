#include <stdio.h>

/*
在 C 语言中 const 修饰的数组是只读的
const 修饰的数组空间不可被改变
*/

int main()
{
    const int A[5] = {1, 2, 3, 4, 5};
    int* p = (int*)&A;

    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }

    for(i = 0; i < 5; i++)
    {
        p[i] = i * 5;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }
}

/*
1
2
3
4
5
0
5
10
15
20
*/
