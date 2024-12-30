#include <stdio.h>
#include <stddef.h>

/**
结构体内存对齐
现在我们深入讨论一个问题: 计算结构体的大小.

结构体的对齐规则:

1. 第一个成员在与结构体变量偏移量为 0 的地址处.

2. 其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处.

对齐数 = 编译器默认的一个对齐数 与 该成员大小的"较小值".
   VS 中默认的值为 8
   GCC 中没有默认对齐数, 因此对齐数就是成员大小

3. 结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍.

4. 如果嵌套了结构体的情况, 嵌套的结构体对齐到嵌套自己的成员的最大对齐数的整数倍处,
   整个结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍.

 */

// #pragma pack(8)                      //设置默认对齐数为 8
// #pragma pack()                       //取消设置的默认对齐数, 还原为默认
struct S1 {
	char c1;		// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
	int i;			// 编译器默认的一个对齐数: 8, 成员大小: 4, 对齐数: 4
	char c2;		// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
};
/**
-------------0
c1
-------------1

-------------2

-------------3

-------------4
i
-------------5
i
-------------6
i
------------7
i
------------8
c2
-------------9

-------------10

-------------11

-------------12

-------------

-------------

-------------

-------------

-------------

-------------
 */

struct S2 {
	char c1;		// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
	char c2;		// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
	int i;			// 编译器默认的一个对齐数: 8, 成员大小: 4, 对齐数: 4
};
/**
-------------0
c1
-------------1
c2
-------------2

-------------3

-------------4
i
-------------5
i
-------------6
i
------------7
i
------------8

-------------9

-------------10

-------------11

-------------12

-------------

-------------

-------------

-------------

-------------

-------------
 */

struct S3 {
	double d;		// 编译器默认的一个对齐数: 8, 成员大小: 8, 对齐数: 8
	char c;			// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
	int i;			// 编译器默认的一个对齐数: 8, 成员大小: 4, 对齐数: 4
};
/**
-------------0
d
-------------1
d
-------------2
d
-------------3
d
-------------4
d
-------------5
d
-------------6
d
------------7
d
------------8
c
-------------9

-------------10

-------------11

-------------12
i
-------------13
i
-------------14
i
-------------15
i
-------------16

-------------

-------------
 */

struct S4 {
	char c1;		// 编译器默认的一个对齐数: 8, 成员大小: 1, 对齐数: 1
	struct S3 s3;		// 编译器默认的一个对齐数: 8, 成员大小: 16
	// 嵌套的结构体对齐到嵌套自己的成员的最大对齐数: 8
	double d;		// 编译器默认的一个对齐数: 8, 成员大小: 8, 对齐数: 8
};
/**
-------------0
c1
-------------1

-------------2

-------------3

-------------4

-------------5

-------------6

------------7

------------8
s3
-------------9
s3
-------------10
s3
-------------11
s3
-------------12
s3
-------------13
s3
-------------14
s3
-------------15
s3
-------------16
s3
-------------17
s3
-------------18
s3
-------------19
s3
-------------20
s3
-------------21
s3
-------------22
s3
-------------23
s3
-------------24
d
-------------25
d
-------------26
d
-------------27
d
-------------28
d
-------------29
d
-------------30
d
-------------31
d
-------------32

-------------

 */

int main(void)
{
	printf("%ld\n", sizeof(char));	// 1
	printf("%ld\n", sizeof(int));	// 4
	printf("%ld\n", sizeof(double));	// 8

	printf("%ld\n", sizeof(struct S1));	// 12
	printf("%ld\n", offsetof(struct S1, c1));	// 0
	printf("%ld\n", offsetof(struct S1, i));	// 4
	printf("%ld\n", offsetof(struct S1, c2));	// 8

	printf("%ld\n", sizeof(struct S2));	// 8
	printf("%ld\n", offsetof(struct S2, c1));	// 0
	printf("%ld\n", offsetof(struct S2, c2));	// 1
	printf("%ld\n", offsetof(struct S2, i));	// 4

	printf("%ld\n", sizeof(struct S3));	// 16
	printf("%ld\n", offsetof(struct S3, d));	// 0
	printf("%ld\n", offsetof(struct S3, c));	// 8
	printf("%ld\n", offsetof(struct S3, i));	// 12

	printf("%ld\n", sizeof(struct S4));	// 32
	printf("%ld\n", offsetof(struct S4, c1));	// 0
	printf("%ld\n", offsetof(struct S4, s3));	// 8
	printf("%ld\n", offsetof(struct S4, d));	// 24

	return 0;
}

/**

# ./main
1
4
8
12
0
4
8
8
0
1
4
16
0
8
12
32
0
8
24
#

 */
