#include <stdio.h>
#include <malloc.h>

/*
由结构体产生柔性数组

柔性数组即数组大小待定的数组
C 语言中结构体的最后一个元素可以是大小未知的数组
C 语言中可以由结构体产生柔性数组
*/

typedef struct _soft_array {
	int len;
	int array[];
} SoftArray;

int main()
{
	printf("%ld\n", sizeof(SoftArray));  // 4
	int i = 0;
	SoftArray * sa = (SoftArray *) malloc(sizeof(SoftArray) + sizeof(int) * 10);
	sa->len = 10;
	for (i = 0; i < sa->len; i++) {
		sa->array[i] = i + 1;
	}
	for (i = 0; i < sa->len; i++) {
		printf("%d\n", sa->array[i]);
	}
	free(sa);
	return 0;
}
