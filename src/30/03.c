#include <stdio.h>

/**
结构体成员的访问
 */

struct Point {
	int x;
	int y;
} p1 = { 2, 3 };

struct score {
	int n;
	char ch;
};

struct Stu {
	char name[20];
	int age;
	struct score s;
};

int main(void)
{
	struct Point p2 = { 3, 4 };
	scanf("%d %d", &(p2.x), &(p2.y));	// 3 4
	printf("x = %d y = %d\n", p2.x, p2.y);	// x = 3 y = 4
	struct Stu s1 = { "zhangsan", 20, { 100, 'q' } };
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);	// zhangsan 20 100 q
	return 0;
}

/**

$ ./main
3 4
x = 3 y = 4
zhangsan 20 100 q
$

 */
