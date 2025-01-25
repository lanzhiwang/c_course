/**
#define
#undef

https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Object-like-Macros.html
 */

#include <stdio.h>

#define MAX 100
#define STR "hello world"

int main(void)
{
	int m = MAX;
	printf("m = %d\n", m);
	printf("MAX = %d\n", MAX);
	printf("STR = %s\n", STR);

	return 0;
}
