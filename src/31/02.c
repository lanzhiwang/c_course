#include <stdio.h>

/**
联合体大小的计算

联合体的大小至少是最大成员的大小.
当最大成员大小不是最大对齐数的整数倍的时候, 就要对齐到最大对齐数的整数倍.
 */

union Un1 {
	char c[5];
	int i;
};

union Un2 {
	short c[7];
	int i;
};

int main(void)
{
	printf("%ld\n", sizeof(short));	// 2

	printf("%ld\n", sizeof(union Un1));	// 8
	printf("%ld\n", sizeof(union Un2));	// 16
	return 0;
}
