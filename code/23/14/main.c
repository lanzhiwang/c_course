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

# gcc -Wall add.c sub.c mult.c div.c main.c -I ./include/ -o main
# ./main
a + b = 15
a - b = 5
a * b = 50
a / b = 2
#

///////////////////////////////////////////////////////////////////////////////

静态库制作

root@adb22371ec86:/code/23/14# tree -a .
.
|-- add.c
|-- div.c
|-- include
|   `-- head.h
|-- main.c
|-- mult.c
`-- sub.c

2 directories, 6 files
root@adb22371ec86:/code/23/14#
root@adb22371ec86:/code/23/14# gcc -Wall -c add.c sub.c mult.c div.c -I ./include/
root@adb22371ec86:/code/23/14#
root@adb22371ec86:/code/23/14# tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|   `-- head.h
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
`-- sub.o

2 directories, 10 files
root@adb22371ec86:/code/23/14#
root@adb22371ec86:/code/23/14# ar rcs libcalc.a add.o sub.o mult.o div.o
root@adb22371ec86:/code/23/14#
root@adb22371ec86:/code/23/14# tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|   `-- head.h
|-- libcalc.a
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
`-- sub.o

2 directories, 11 files
root@adb22371ec86:/code/23/14#

///////////////////////////////////////////////////////////////////////////////

静态库使用

root@adb22371ec86:/code/23/14# mkdir test
root@adb22371ec86:/code/23/14# cp libcalc.a test/
root@adb22371ec86:/code/23/14# cp include/head.h test/
root@adb22371ec86:/code/23/14# cp main.c test/
root@adb22371ec86:/code/23/14# tree -a .
.
|-- add.c
|-- add.o
|-- div.c
|-- div.o
|-- include
|   `-- head.h
|-- libcalc.a
|-- main.c
|-- mult.c
|-- mult.o
|-- sub.c
|-- sub.o
`-- test
    |-- head.h
    |-- libcalc.a
    `-- main.c

3 directories, 14 files
root@adb22371ec86:/code/23/14# cd test
root@adb22371ec86:/code/23/14/test# gcc -Wall main.c -o calc
/usr/bin/ld: /tmp/ccnMrmn5.o: in function `main':
main.c:(.text+0x21): undefined reference to `add'
/usr/bin/ld: main.c:(.text+0x41): undefined reference to `sub'
/usr/bin/ld: main.c:(.text+0x61): undefined reference to `mult'
collect2: error: ld returned 1 exit status
root@adb22371ec86:/code/23/14/test#
root@adb22371ec86:/code/23/14/test# gcc -Wall main.c -L ./ -l calc -o calc
root@adb22371ec86:/code/23/14/test# ./calc
a + b = 15
a - b = 5
a * b = 50
a / b = 2
root@adb22371ec86:/code/23/14/test#

 */
