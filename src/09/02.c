#include <stdio.h>

int main(void)
{
	int ch;
	while ((ch = getchar())) {
		printf("|02 %c|\n", ch);
		if (ch == '\n') {
			break;
		}
	}

	return 0;
}

/**

$ ./main
abcdefg  // 输入 abcdefg 加上 enter 之后才开始打印
|02 a|
|02 b|
|02 c|
|02 d|
|02 e|
|02 f|
|02 g|
|02
|
$

 */
