#include <stdio.h>
// #include <stddef.h>

/**
位段
 */

struct A {
	int _a:2;		//  2 bit
	int _b:5;		//  5 bit
	int _c:10;		//  10 bit
	int _d:30;		//  30 bit
};

int main(void)
{
	printf("%ld\n", sizeof(struct A));	// 8
	// printf("%ld\n", offsetof(struct A, _a));
	// printf("%ld\n", offsetof(struct A, _b));
	// printf("%ld\n", offsetof(struct A, _c));
	// printf("%ld\n", offsetof(struct A, _d));

	struct A a = { 0 };
	a._a = 1;
	a._b = 12;
	a._c = 3;
	a._d = 4;
	printf("a = %d b = %d c = %d d = %d\n", a._a, a._b, a._c, a._d);	// a = 1 b = 12 c = 3 d = 4

	a._a = 3;
	a._b = 12;
	a._c = 3;
	a._d = 4;
	printf("a = %d b = %d c = %d d = %d\n", a._a, a._b, a._c, a._d);	// a = -1 b = 12 c = 3 d = 4

	// scanf("%d", &(a._a));  // error: cannot take address of bit-field '_a'

	return 0;
}

/**

$ ./main
8
a = 1 b = 12 c = 3 d = 4
a = -1 b = 12 c = 3 d = 4
$

 */
