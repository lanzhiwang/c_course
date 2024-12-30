#include <stdio.h>
#include <string.h>

/**
结构体成员的访问
 */

struct score {
	int n;
	char ch;
};

struct Stu {
	char name[20];
	int age;
	struct score s;
};

void setStudent(struct Stu *ss)
{
	/*
	   error: assignment to expression with array type
	   因为数组的数组名是地址, 是一个常量, 是不能被赋值的
	 */
	// ss->name = "lisi";
	strcpy(ss->name, "lisi");
	ss->age = 40;

	ss->s.n = 200;		// 等价于 (ss->s).n = 200;
	(ss->s).ch = 'p';
}

int main(void)
{
	struct Stu s1 = { "zhangsan", 20, { 100, 'q' } };
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);	// zhangsan 20 100 q

	struct Stu s2 = { 0 };
	setStudent(&s2);
	printf("%s %d %d %c\n", s2.name, s2.age, s2.s.n, s2.s.ch);	// zhangsan 20 100 q

	return 0;
}

/**

# ./main
zhangsan 20 100 q
lisi 40 200 p
#

 */
