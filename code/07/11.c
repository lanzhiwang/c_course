#include <stdio.h>

int main(void)
{
	char s[10] = "xxxxxxxxxx";
	scanf("%10s", s);
	printf("|s = %s|\n", s);
	return 0;
}

/**
# gdb main

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) b 6
Breakpoint 1 at 0x401152: file 11.c, line 6.
(gdb) b 7
Breakpoint 2 at 0x401168: file 11.c, line 7.
(gdb) r
Starting program: /code/07/main
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at 11.c:6
6		scanf("%10s", s);
(gdb) print s
$1 = "xxxxxxxxxx"
(gdb) n
abcdefghijklmnopqrst

Breakpoint 2, main () at 11.c:7
7		printf("|s = %s|\n", s);
(gdb) print s
$2 = "abcdefghij"
(gdb) n
|s = abcdefghij|
8		return 0;
(gdb)

 */
