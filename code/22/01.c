/**
字符串和字符数组

1. C 语言中有 字符 类型, 但是没有 字符串 类型
2. 字符串使用双引号, 末尾隐藏一个 \0

 */

#include <stdio.h>

/**
 字符数组的创建和初始化
 */
int main(void)
{
	/**
	把 字符数组 当做普通数组使用
	 */
	char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < sz; i++) {
		printf("%c ", arr[i]);	// a b c d e
	}
	printf("\n");
	printf("sizeof(arr) = %ld, sizeof(arr[0]) = %ld\n", sizeof(arr), sizeof(arr[0]));	// sizeof(arr) = 5, sizeof(arr[0]) = 1

	/**
	使用 字符数组 引用 字符串
	 */

	/**
	(gdb) print blue
	$15 = '\000' <repeats 25 times>
	(gdb)
	 */
	char blue[26];

	/**
	(gdb) print yellow
	$18 = "yellow", '\000' <repeats 19 times>
	(gdb)
	 */
	char yellow[26] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };	// 需要注意的是, 逐个字符地给数组赋值并不会自动添加 '\0'

	/**
	(gdb) print orange
	$21 = "orange", '\000' <repeats 19 times>
	(gdb)
	 */
	char orange[26] = "orange";	// "orange\0"

	/**
	(gdb) print gray
	$23 = "gray"
	(gdb)
	 */
	char gray[] = { 'g', 'r', 'a', 'y', '\0' };

	/**
	(gdb) print salmon
	$24 = "salmon"
	(gdb)
	 */
	char salmon[] = "salmon";	// "salmon\0"

	return 0;
}
