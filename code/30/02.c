#include <stdio.h>

/**
结构体

结构体变量

 */

struct Stu {
	char name[20];		//名字
	int age;		//年龄
	char sex[5];		//性别
	char id[20];		//学号
};

struct Point {
	int x;
	int y;
} p5, p6;			// 声明类型的同时定义变量

struct Point p3;		// 全局变量
struct Point p4;

struct Node {
	int data;
	struct Point p;
	struct Node *next;
} n1 = { 10, { 4, 5 }, NULL };

struct Node n2 = { 20, {.x = 5,.y = 6 }, NULL };	//结构体嵌套初始化

int main(void)
{
	struct Point p1 = { 5, 7 };	// 局部变量
	struct Point p2;
	struct Stu stu1 = { "zhangsan", 20, "男", "2024010103" };
	struct Stu stu2 = {.age = 30,.name = "lisi",.sex = "男",.id =
		    "2024010103"
	};
	return 0;
}
