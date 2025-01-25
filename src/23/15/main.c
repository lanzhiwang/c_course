/**
函数

动态库制作和使用

 */

#include <stdio.h>
#include "head.h"

int main(void)
{
	int a = 10;
	int b = 5;

	printf("a + b = %d\n", add(a, b));
	printf("a - b = %d\n", sub(a, b));
	printf("a * b = %d\n", mult(a, b));
	printf("a / b = %d\n", div(a, b));

	return 0;
}

/**

动态库制作

$ tree -a .
.
|-- add.c
|-- div.c
|-- include
|    -- head.h
|-- main.c
|-- mult.c
`-- sub.c

2 directories, 6 files
$

$ gcc -Wall -c -fpic add.c sub.c mult.c div.c -I ./include/

$
$ tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|    -- head.h
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o

2 directories, 10 files
$

$ gcc -Wall -shared add.o sub.o mult.o div.o -o libcalc.so

$
$ tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|    -- head.h
|-- libcalc.so
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o

2 directories, 11 files
$

///////////////////////////////////////////////////////////////////////////////

动态库使用
$ mkdir test
$ cp libcalc.so test/
$ cp include/head.h test/
$ cp main.c test/
$
$ tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|    -- head.h
|-- libcalc.so
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o
|-- test
    |-- head.h
    |-- libcalc.so
    |-- main.c

3 directories, 14 files
$

$ cd test/
$

$ pwd
/code/23/15/test
$

$

$ gcc -Wall main.c -L ./ -l calc -o calc
$

$ ./calc
./calc: error while loading shared libraries: libcalc.so: cannot open shared object file: No such file or directory
$

$ ldd calc
	linux-vdso.so.1 (0x00007ffe2a9d0000)
	libcalc.so => not found
	libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fbc6c00f000)
	/lib64/ld-linux-x86-64.so.2 (0x00007fbc6c1f9000)
$

$ cat /etc/ld.so.conf
include /etc/ld.so.conf.d/*.conf

$
$ tree -a /etc/ld.so.conf.d/
/etc/ld.so.conf.d/
|-- 000-local-lib.conf
|-- libc.conf
|-- x86_64-linux-gnu.conf

1 directory, 3 files
$

$ cat /etc/ld.so.conf.d/000-local-lib.conf
/usr/local/lib64
/usr/local/lib
$

cat > /etc/ld.so.conf.d/calc-lib.conf <<EOF
/code/23/15/test
EOF

$ tree -a /etc/ld.so.conf.d/
/etc/ld.so.conf.d/
|-- 000-local-lib.conf
|-- calc-lib.conf
|-- libc.conf
|-- x86_64-linux-gnu.conf

1 directory, 4 files
$

$
$ ldconfig  # 更新 /etc/ld.so.conf 中的数据到 /etc/ld.so.cache 中
$
$ ./calc
a + b = 15
a - b = 5
a * b = 50
a / b = 2
$

 */
