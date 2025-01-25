#include <stdio.h>

int main(void)
{
	// 从标准输入读入
	char s[10] = "xxxxxxxxxx";
	scanf("%s", s);
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
|s = abcdefghijklmnopqrst|
Segmentation fault
$

//////////////////////////////////

(gdb) print s
$2 = "xxxxxxxxxx"
abc
(gdb) print s
$3 = "abc\000xxxxxx"

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
|s = abcdefghijklmnopqrst|

$ gdb main
GNU gdb (Debian 13.1-3) 13.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) b 6
Breakpoint 1 at 0x40113e: file 10.c, line 6.
(gdb) b 7
Breakpoint 2 at 0x401152: file 10.c, line 7.
(gdb) b 8
Breakpoint 3 at 0x401168: file 10.c, line 8.
(gdb) r
Starting program: /src/07/main
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, main () at 10.c:6
6		char s[10] = "xxxxxxxxxx";
(gdb) print s
$1 = "\000\000\000\000\000\000\000\000\000"
(gdb) n

Breakpoint 2, main () at 10.c:7
7		scanf("%s", s);
(gdb) print s
$2 = "xxxxxxxxxx"
(gdb) n
abc

Breakpoint 3, main () at 10.c:8
8		printf("|s = %s|\n", s);
(gdb) print s
$3 = "abc\000xxxxxx"
(gdb) n
|s = abc|
9		return 0;
(gdb) n
10	}
(gdb) n
__libc_start_call_main (main=main@entry=0x401136 <main>, argc=argc@entry=1, argv=argv@entry=0x7fffffffeaf8) at ../sysdeps/nptl/libc_start_call_main.h:74
74	../sysdeps/nptl/libc_start_call_main.h: No such file or directory.
(gdb)

 */
