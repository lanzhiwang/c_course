#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	char s[10] = "xxxxxxxxxx";
	scanf("%10s", s);
	printf("|s = %s|\n", s);
	return 0;
}

/**

输入:
abc
 abc
 abc def ghi
abcdefghijklmnopqrst

//////////////////////////////////

$ ./main
abc
|s = abc|
$

$ ./main
 abc
|s = abc|
$

$ ./main
 abc def ghi
|s = abc|
$

$ ./main
abcdefghijklmnopqrst
|s = abcdefghij|
$

//////////////////////////////////

(gdb) print s
$1 = "xxxxxxxxxx"
abc
(gdb) print s
$2 = "abc\000xxxxxx"

(gdb) print s
$1 = "xxxxxxxxxx"
 abc
(gdb) print s
$2 = "abc\000xxxxxx"

(gdb) print s
$1 = "xxxxxxxxxx"
 abc def ghi
(gdb) print s
$2 = "abc\000xxxxxx"

(gdb) print s
$1 = "xxxxxxxxxx"
abcdefghijklmnopqrst
(gdb) print s
$2 = "abcdefghij"
(gdb) n
|s = abcdefghij|
9		return 0;

 */
