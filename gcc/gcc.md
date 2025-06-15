# An Introduction to GCC

## book

* 《An Introduction to GCC For the GNU Compilers GCC and G++》

## 实践

```bash
$ gcc --version

$ gcc --help
```

```bash
$ gcc -v -Wall hello.c -o hello
```

```bash
$ gcc -v -Wall main.c fn.c -o main

$ gcc -v -Wall -c main.c
$ gcc -v -Wall -c fn.c
$ gcc -v -Wall main.o fn.o -o main
```

```bash
$ gcc -v -Wall hello.c usr/lib/libm.a -o hello

$ gcc -v -Wall hello.c -lm -o hello

# -l 指定一个库
# -L 指定库目录
# -I 指定头文件目录

```

# 编译过程

```
        预处理 cpp            编译 gcc             汇编 as              链接 ln
main.c -----------> main.i -----------> mian.s -----------> mian.o -----------> main
                                                                                 ^
                                                                   链接 ln        |
                                                         start.s ----------> start.o
```

```bash
# 预处理
$ gcc -E main.c -o main.i
$ cpp main.c > main.i

# 编译
$ gcc -S main.i -o main.s

# 汇编
# main.o 是 ELF 格式
$ gcc -c main.s -o main.o
$ as -c main.s -o main.o

# 链接
$ gcc mian.o -o main

```

## Binutils 工具列表

* addr2line
* ar
* as
* objcopy
* objdump
* ld
* ldd
* readelf
* size
* file
* nm

```bash
$ gcc -v -Wall hello.c -o hello
$ size hello
$ ldd hello

$ gcc -v -Wall -static hello.c -o hello
$ size hello
$ ldd hello

# 查看 ELF 文件
$ readelf -S hello

# 反汇编
$ objdump -D hello

$ gcc -v -Wall -g hello.c -o hello
$ objdump -S hello
$ ulimit -c
$ ulimit -c unlimited
```

## 静态链接库

```bash
$ ar cr libNAME.a file1.o file2.o file3.o file4.o

$ ar t libNAME.a
```

## 动态链接库

```bash
$ gcc --shared -fPIC -o libname.so file1.o
```

## C 语言标准

```
--------------------------
| GNU C (gcc 默认)        |
|                      |
| -------------------- |
|                      | ANSI/ISO Standard |  |
| -------------------- |
|                      |
--------------------------
```

```bash
# -ansi or -pedantic
# -std

# -std=c89 or -std=iso9899:1990
# -std=iso9899:199409
# -std=c99 or -std=iso9899:1999

$ gcc -v -Wall -ansi -std=c99 ansi.c -o ansi
```

## 预处理

```bash
# -DNAME=value

$ gcc -v -Wall -DTEST=1 dtest.c -o dd
$ gcc -v -Wall -DTEST dtest.c -o dd
$ gcc -v -Wall -c -save-temps dtest.c

$ cpp -dM /dev/null
```

## 优化

```bash
# -Olevel
# level from 0 to 3
# 优化等级逐渐提高
```

## gprof and gcov

```bash
$ gcc -v -Wall -pg collatz.c -o collatz
$ ./collatz  => gmon.out
$ gprof collatz

$ gcc -v -Wall -fprofile-arcs -ftest-coverage cov.c
# a.out
# cov.gcno

$ ./a.out
# cov.gcda

$ gcov cov.c
# cov.c.gcov

$ cat cov.c.gcov
```
