/**
字符和 ASCII 编码

 */

#include <stddef.h>
#include <stdio.h>
#include <uchar.h>

int main(void)
{
	char ch = 'a';
	printf("%c\n", ch);	// a
	printf("%c\n", 'a');	// a
	printf("%c\n", 97);	// a
	printf("\n");

	char ch1 = 'A';
	char ch2 = 'a';
	printf("%c | %d | %x |\n", ch1, ch1, ch1);	// A | 65 | 41 |
	printf("%c | %d | %x |\n", ch2, ch2, ch2);	// a | 97 | 61 |
	printf("%c | %d | %x |\n", ch1 + 32, ch1 + 32, ch1 + 32);	// a | 97 | 61 |
	printf("\n");

	int i1 = 'A';		// 这里是 int 类型
	int i2 = 'a';
	printf("%c | %d | %x |\n", i1, i1, i1);	// A | 65 | 41 |
	printf("%c | %d | %x |\n", i2, i2, i2);	// a | 97 | 61 |
	printf("%c | %d | %x |\n", i1 + 32, i1 + 32, i1 + 32);	// a | 97 | 61 |

	return 0;

}

/**

$ ./main
a
a
a

A | 65 | 41 |
a | 97 | 61 |
a | 97 | 61 |

A | 65 | 41 |
a | 97 | 61 |
a | 97 | 61 |
$

 */
