/**
函数

静态库制作和使用

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

$ gcc -Wall add.c sub.c mult.c div.c main.c -I ./include/ -o main

$ ./main
a + b = 15
a - b = 5
a * b = 50
a / b = 2
$

///////////////////////////////////////////////////////////////////////////////

静态库制作

$ tree -a .
.
|-- add.c
|-- div.c
|-- include
|    -- head.h
|-- main.c
|-- mult.c
|-- sub.c

2 directories, 6 files
$

$ gcc -Wall -c add.c sub.c mult.c div.c -I ./include/

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

$ ar rcs libcalc.a add.o sub.o mult.o div.o

$
$ tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|    -- head.h
|-- libcalc.a
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o

2 directories, 11 files
$

///////////////////////////////////////////////////////////////////////////////

静态库使用

$ mkdir test
$ cp libcalc.a test/
$ cp include/head.h test/
$ cp main.c test/
$ tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|    -- head.h
|-- libcalc.a
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o
|-- test
    |-- head.h
    |-- libcalc.a
    |-- main.c

3 directories, 14 files

$ cd test

$ gcc -Wall main.c -o calc
/usr/bin/ld: /tmp/ccnMrmn5.o: in function `main':
main.c:(.text+0x21): undefined reference to `add'
/usr/bin/ld: main.c:(.text+0x41): undefined reference to `sub'
/usr/bin/ld: main.c:(.text+0x61): undefined reference to `mult'
collect2: error: ld returned 1 exit status
$

$ gcc -Wall main.c -L ./ -l calc -o calc
$ ./calc
a + b = 15
a - b = 5
a * b = 50
a / b = 2
$

 */
