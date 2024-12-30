/**
字符和 ASCII 编码

转义字符

\ddd ddd 表示 1 ~ 3 个 8 进制数字, 最多 3 个

\xd... 表示 1 个到多个 16 进制数字, 最少 1 个, 可以无限个

\0 null 字符, 代表没有内容, \0 就是 \ddd 这类转义字符的一种, 用于字符串的结束标志, 其 ASCII 编码是 0

 */

#include <stdio.h>

int main(void)
{
	printf("%c\n", '\130');	// X
	printf("%s\n", "\130\130\130\130");	// XXXX

	printf("%c\n", '\x5A');	// Z
	printf("%s\n", "\x5A\x5A\x5A\x5A");	// ZZZZ

	return 0;
}

/**

 */
