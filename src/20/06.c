#include <stdio.h>
#include <malloc.h>
/**
柔性数组成员

1. 数组成员的元素个数为 0
2. 数组成员不占用内存空间
3. 数组成员在结构体中
4. 在结构体中的数组成员只有一个
5. 数组成员中的元素类型可以是任意类型，可以是 int, char 等

柔性的含义是数组成员管理的内存空间可大可小

 */

struct test {
	int size;
	int ptr[0];
};

int main(void)
{
	int size = 20;
	struct test *pt =
	    (struct test *)malloc(sizeof(struct test) + sizeof(int) * size);
	pt->size = size;

	for (size_t i = 0; i < pt->size; ++i) {
		pt->ptr[i] = i + 1;
	}
	for (size_t i = 0; i < pt->size; ++i) {
		printf("%d ", pt->ptr[i]);
	}
	printf("\n");
	free(pt);

	return 0;
}

/**

$ ./main
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
$

 */
