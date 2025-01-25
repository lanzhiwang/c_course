#include <stdio.h>

int main(void)
{
	int ch;
	while ((ch = getchar()) != '\n') {
		printf("|03 %c|\n", ch);
	}

	return 0;
}

/**

$ ./main
abcdefg
|03 a|
|03 b|
|03 c|
|03 d|
|03 e|
|03 f|
|03 g|
$

 */
