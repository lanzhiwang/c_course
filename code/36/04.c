/**
#define
#undef

https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Object-like-Macros.html
 */

#include <stdio.h>

#define do_forever for(;;)

int main(void)
{
	int i = 0;
	do_forever {
		printf("i = %d\n", i);
		i++;
		if (i == 5) {
			break;
		}
	}

	return 0;
}
