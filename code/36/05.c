/**
#define
#undef

https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Object-like-Macros.html
 */

#include <stdio.h>

#define DEBUG_PRINTF1 printf("Internal error: ""negative string length ""at %s, line %d.\n", __FILE__, __LINE__)
#define DEBUG_PRINTF2 printf("Internal error: "\
							"negative string length "\
							"at %s, line %d.\n", \
							__FILE__, __LINE__)

int main(void)
{
	DEBUG_PRINTF1;
	DEBUG_PRINTF2;

	return 0;
}
