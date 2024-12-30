#include <stdio.h>

int main(void)
{
	char s[10] = "xxxxxxxxxx";
	scanf("%9s", s);
	printf("|s = %s|\n", s);
	return 0;
}

/**
# gdb main

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) b 6
Breakpoint 1 at 0x401152: file 12.c, line 6.
(gdb) b 7
Breakpoint 2 at 0x401168: file 12.c, line 7.
(gdb) r
Starting program: /code/07/main
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at 12.c:6
6		scanf("%9s", s);
(gdb) print s
$1 = "xxxxxxxxxx"
(gdb) n
abcdefghijklmnopqrst

Breakpoint 2, main () at 12.c:7
7		printf("|s = %s|\n", s);
(gdb) print s
$2 = "abcdefghi"
(gdb) n
|s = abcdefghi|
8		return 0;
(gdb) exit
A debugging session is active.

	Inferior 1 [process 22784] will be killed.

Quit anyway? (y or n) y

///////////////////////////////////////////////

# gdb main

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) b 6
Breakpoint 1 at 0x401152: file 12.c, line 6.
(gdb) b 7
Breakpoint 2 at 0x401168: file 12.c, line 7.
(gdb) r
Starting program: /code/07/main
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at 12.c:6
6		scanf("%9s", s);
(gdb) print s
$1 = "xxxxxxxxxx"
(gdb) n
abc

Breakpoint 2, main () at 12.c:7
7		printf("|s = %s|\n", s);
(gdb) print s
$2 = "abc\000xxxxxx"
(gdb) n
|s = abc|
8		return 0;
(gdb)

 */
