#include <stdio.h>

/**
结构体

结构体的声明
结构体成员的类型可以是标量、数组、指针, 甚至是其他结构体.

struct tag {
	member-list;
}variable-list;

 */

struct Stu {
	char name[20];		//名字
	int age;		//年龄
	char sex[5];		//性别
	char id[20];		//学号
};

int main(void)
{
	return 0;
}
