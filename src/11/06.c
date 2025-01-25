#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++) {
		printf("inner i = %d\n", i);
	}
	// printf("outer i = %d\n", i);// error: 'i' undeclared (first use in this function)

	return 0;
}

/**

$ ./main
inner i = 0
inner i = 1
inner i = 2
inner i = 3
inner i = 4
inner i = 5
inner i = 6
inner i = 7
inner i = 8
inner i = 9
$

 */
