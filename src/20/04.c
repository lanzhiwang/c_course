#include <stdio.h>

/**
柔性数组成员

1. 数组成员的元素个数为 0
2. 数组成员不占用内存空间
3. 数组成员在结构体中
4. 在结构体中的数组成员只有一个
5. 数组成员中的元素类型可以是任意类型，可以是 int, char 等

柔性的含义是数组成员管理的内存空间可大可小

 */

struct test1 {
	char name[20];		//名字
	int age;		//年龄
	char sex[5];		//性别
	char id[20];		//学号
};

struct test2 {
	char name[20];		//名字
	int age;		//年龄
	char sex[5];		//性别
	char id[20];		//学号
	int address[0];		// 数组成员
};

int main(void)
{
	printf("sizeof(struct test1) = %ld\n", sizeof(struct test1));
	printf("sizeof(struct test2) = %ld\n", sizeof(struct test2));

	return 0;
}

/**

$ ./main
sizeof(struct test1) = 52
sizeof(struct test2) = 52
$

 */
