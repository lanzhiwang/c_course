#include <stdio.h>

int main(void)
{
	printf("123\n");
	goto end;
	printf("456\n");
end:
	printf("789\n");

	/**
	for () {
		for () {
			for () {
				if (disaster) {
					goto error;
				}
			}
		}
	}
	error:
		;
	*/

	return 0;
}

/**
# ./main
123
789
#
 */
