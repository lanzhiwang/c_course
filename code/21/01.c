/**
字符和 ASCII 编码

 */

#include <stddef.h>
#include <stdio.h>
#include <uchar.h>

int main(void)
{
	char ch = 'a';
	printf("%c\n", ch);
	printf("%c\n", 'a');
	printf("%c\n", 97);
	printf("\n");

	char ch1 = 'A';
	char ch2 = 'a';
	printf("%c | %d | %x |\n", ch1, ch1, ch1);
	printf("%c | %d | %x |\n", ch2, ch2, ch2);
	printf("%c | %d | %x |\n", ch1 + 32, ch1 + 32, ch1 + 32);
	printf("\n");

	int i1 = 'A';
	int i2 = 'a';
	printf("%c | %d | %x |\n", i1, i1, i1);
	printf("%c | %d | %x |\n", i2, i2, i2);
	printf("%c | %d | %x |\n", i1 + 32, i1 + 32, i1 + 32);

	return 0;

}

/**

# ./main
a
a
a

A | 65 | 41 |
a | 97 | 61 |
a | 97 | 61 |

A | 65 | 41 |
a | 97 | 61 |
a | 97 | 61 |
#

 */
