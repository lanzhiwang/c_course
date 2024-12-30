/**
二级指针

 */

#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a = %d\n", a);	// a = 10
	printf("&a = %p\n", &a);	// &a = 0x7ffea4f9741c

	int *p = &a;
	printf("p = %p\n", p);	// p = 0x7ffea4f9741c
	printf("&p = %p\n", &p);	// &p = 0x7ffea4f97410
	printf("*p = %d\n", *p);	// *p = 10
	printf("p + 1 = %p\n", p + 1);	// p + 1 = 0x7ffea4f97420

	int **pp = &p;
	printf("pp = %p\n", pp);	// pp = 0x7ffea4f97410
	printf("&pp = %p\n", &pp);	// &pp = 0x7ffea4f97408
	printf("*pp = %p\n", *pp);	// *pp = 0x7ffea4f9741c
	printf("**pp = %d\n", **pp);	// **pp = 10
	printf("pp + 1 = %p\n", pp + 1);	// pp + 1 = 0x7ffea4f97418

	return 0;
}

/**

               ------> ---------------

               ------> ---------------
                       0x7fff6f9f6d30  <----- pp
0x7fff6f9f6d28 ------> ---------------

               ------> ---------------
                       0x7fff6f9f6d3c  <----- p
0x7fff6f9f6d30 ------> ---------------

               ------> ---------------

               ------> ---------------
                       10              <----- a
0x7fff6f9f6d3c ------> ---------------

 */
