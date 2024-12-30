#include <stdio.h>
#include <stddef.h>

/**
结构体内存对齐
现在我们深入讨论一个问题: 计算结构体的大小.
 */

#pragma pack(1)			//设置默认对齐数为 1, 对齐数最好设计成2的次方数
struct S1 {
	char c1;		// 编译器默认的一个对齐数: 1, 成员大小: 1, 对齐数: 1
	int i;			// 编译器默认的一个对齐数: 1, 成员大小: 4, 对齐数: 1
	char c2;		// 编译器默认的一个对齐数: 1, 成员大小: 1, 对齐数: 1
};
/**
-------------0
c1
-------------1
i
-------------2
i
-------------3
i
-------------4
i
-------------5
c2
-------------6

------------7

------------

 */
#pragma pack()			//取消设置的默认对齐数, 还原为默认

int main(void)
{
	printf("%ld\n", sizeof(char));	// 1
	printf("%ld\n", sizeof(int));	// 4
	printf("%ld\n", sizeof(double));	// 8

	printf("%ld\n", sizeof(struct S1));	// 6
	printf("%ld\n", offsetof(struct S1, c1));	// 0
	printf("%ld\n", offsetof(struct S1, i));	// 1
	printf("%ld\n", offsetof(struct S1, c2));	// 5

	return 0;
}
