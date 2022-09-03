#include <stdio.h>
#include <malloc.h>

/*
由结构体产生柔性数组

柔性数组即数组大小待定的数组
C 语言中结构体的最后一个元素可以是大小未知的数组
C 语言中可以由结构体产生柔性数组
*/

typedef struct _soft_array
{
    int len;
    int array[];
} SoftArray;

SoftArray* create_soft_array(int size)
{
    SoftArray* ret = NULL;
    if (size > 0)
    {
        ret = (SoftArray*)malloc(sizeof(*ret) + sizeof(*(ret->array)) * size);
        ret->len = size;
    }
    return ret;
}

void fac(SoftArray* sa)
{
    int i = 0;
    if (NULL != sa)
    {
        if (1 == sa->len) {
            sa->array[0] = 1;
        } else {
            sa->array[0] = 1;
            sa->array[1] = 1;
            for(i = 2; i < sa->len; i++)
            {
                sa->array[i] = sa->array[i-1] + sa->array[i-2];
            }
        }
    }
}

void delete_soft_array(SoftArray* sa)
{
    free(sa);
}

int main()
{
    int i = 0;
    SoftArray* sa = create_soft_array(10);
    fac(sa);
    for(i = 0 ; i < sa->len; i++)
    {
        printf("%d\n", sa->array[i]);
    }
    delete_soft_array(sa);
    return 0;
}
