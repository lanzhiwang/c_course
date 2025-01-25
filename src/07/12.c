#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	char s[10] = "xxxxxxxxxx";
	scanf("%9s", s);
	printf("|s = %s|\n", s);
	return 0;
}

/**

(gdb) print s
$1 = "xxxxxxxxxx"
abcdefghijklmnopqrst
(gdb) print s
$2 = "abcdefghi"
(gdb) n
|s = abcdefghi|

(gdb) print s
$1 = "xxxxxxxxxx"
(gdb) n
abc
(gdb) print s
$2 = "abc\000xxxxxx"
(gdb) n
|s = abc|

 */
