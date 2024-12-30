#include <stdio.h>

/**
结构体成员的访问
 */

struct Point {
	int x;
	int y;
};

void SetPoint1(struct Point pp)
{
	pp.x = 3;
	pp.y = 4;
}

void SetPoint2(struct Point *pp)
{
	(*pp).x = 5;
	(*pp).y = 6;
}

void SetPoint3(struct Point *pp)
{
	// scanf("%d %d", &((*pp).x), &((*pp).y));
	// scanf("%d %d", &(pp->x), &(pp->y));
	pp->x = 7;
	pp->y = 8;
}

int main(void)
{
	struct Point p = { 1, 2 };
	printf("x = %d y = %d\n", p.x, p.y);	// x = 1 y = 2

	SetPoint1(p);
	printf("x = %d y = %d\n", p.x, p.y);	// x = 1 y = 2

	SetPoint2(&p);
	printf("x = %d y = %d\n", p.x, p.y);	// x = 5 y = 6

	SetPoint3(&p);
	printf("x = %d y = %d\n", p.x, p.y);	// x = 7 y = 8

	struct Point p1 = { 1, 2 };
	printf("x = %d y = %d\n", p1.x, p1.y);	// x = 1 y = 2
	/*
	   04.c: In function 'main':
	   04.c:45:11: error: invalid type argument of '->' (have 'struct Point')
	   45 |         p1->x = 11;
	   |           ^~
	   04.c:46:11: error: invalid type argument of '->' (have 'struct Point')
	   46 |         p1->y = 22;
	   |           ^~
	   root@7d2a25b878f4:/code/294#
	 */
	// p1->x = 11;
	// p1->y = 22;

	p1.x = 11;
	p1.y = 22;
	printf("x = %d y = %d\n", p1.x, p1.y);	// x = 11 y = 22

	return 0;
}

/**

# ./main
x = 1 y = 2
x = 1 y = 2
x = 5 y = 6
x = 7 y = 8
x = 1 y = 2
x = 11 y = 22
#

 */
