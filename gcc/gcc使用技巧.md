# gcc 使用技巧

## 打印 gcc 预定义宏信息

```bash
root@2645d18936ae:/src# gcc -dM -E - < /dev/null
#define __DBL_MIN_EXP__ (-1021)
#define __UINT_LEAST16_MAX__ 0xffff
#define __FLT16_HAS_QUIET_NAN__ 1
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16

```

## 打印 gcc 默认搜索目录列表

```bash
root@2a22e838b407:/src# gcc -v /dev/null -o /dev/null
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/lto-wrapper
Target: x86_64-linux-gnu
Configured with: /usr/src/gcc/configure --build=x86_64-linux-gnu --disable-multilib --enable-languages=c,c++,fortran,go
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 12.4.0 (GCC)
COMPILER_PATH=/usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/:/usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/:/usr/local/libexec/gcc/x86_64-linux-gnu/:/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/:/usr/local/lib/gcc/x86_64-linux-gnu/
LIBRARY_PATH=/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/:/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../../lib64/:/lib/x86_64-linux-gnu/:/lib/../lib64/:/usr/lib/x86_64-linux-gnu/:/usr/lib/../lib64/:/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../:/lib/:/usr/lib/
COLLECT_GCC_OPTIONS='-v' '-o' '/dev/null' '-mtune=generic' '-march=x86-64' '-dumpdir' 'a.'
 /usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/collect2 -plugin /usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/liblto_plugin.so -plugin-opt=/usr/local/libexec/gcc/x86_64-linux-gnu/12.4.0/lto-wrapper -plugin-opt=-fresolution=/tmp/cczL8jZJ.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_s --eh-frame-hdr -m elf_x86_64 -dynamic-linker /lib64/ld-linux-x86-64.so.2 -o /dev/null /lib/x86_64-linux-gnu/crt1.o /lib/x86_64-linux-gnu/crti.o /usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/crtbegin.o -L/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0 -L/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../../lib64 -L/lib/x86_64-linux-gnu -L/lib/../lib64 -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib64 -L/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../.. /dev/null -lgcc --push-state --as-needed -lgcc_s --pop-state -lc -lgcc --push-state --as-needed -lgcc_s --pop-state /usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/crtend.o /lib/x86_64-linux-gnu/crtn.o
/usr/bin/ld: input file '/dev/null' is the same as output file
collect2: error: ld returned 1 exit status
root@2a22e838b407:/src#


/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/:
/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../../lib64/:
/lib/x86_64-linux-gnu/:
/lib/../lib64/:
/usr/lib/x86_64-linux-gnu/:
/usr/lib/../lib64/:
/usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../:
/lib/:
/usr/lib/

root@2a22e838b407:/src# cd /usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../../lib64/
root@2a22e838b407:/usr/local/lib64# pwd
/usr/local/lib64
root@2a22e838b407:/usr/local/lib64#

root@2a22e838b407:/usr/local/lib64# cd /lib/../lib64/
root@2a22e838b407:/lib64# pwd
/lib64
root@2a22e838b407:/lib64#

root@2a22e838b407:/lib64# cd /usr/lib/../lib64/
root@2a22e838b407:/usr/lib64# pwd
/usr/lib64
root@2a22e838b407:/usr/lib64#

root@2a22e838b407:/usr/lib64# cd /usr/local/lib/gcc/x86_64-linux-gnu/12.4.0/../../../
root@2a22e838b407:/usr/local/lib# pwd
/usr/local/lib
root@2a22e838b407:/usr/local/lib#



```

## 打印 gcc 执行的子命令不执行

```bash
gcc -### foo.c
gcc -v foo.c
```


## 打印优化级别的对应选项

```bash
root@2645d18936ae:/src# gcc -Q --help=optimizers
The following options control optimizations:
  -O<number>
  -Ofast
  -Og
  -Os
  -Oz
  -faggressive-loop-optimizations 	[enabled]
  -falign-functions           		[disabled]
  -falign-functions=
  -falign-jumps               		[disabled]
  -falign-jumps=
  -falign-labels              		[disabled]
  -falign-labels=
  -falign-loops               		[disabled]
  -falign-loops=
  -fallocation-dce            		[enabled]
  -fallow-store-data-races    		[disabled]
  -fassociative-math          		[disabled]
  -fasynchronous-unwind-tables 		[enabled]
  -fauto-inc-dec              		[enabled]
  -fbit-tests                 		[enabled]
  -fbranch-count-reg          		[disabled]

```

## 打印头文件搜索路径

```bash
gcc -### foo.c
gcc -v foo.c
```

## 打印库文件的具体路径

```bash
root@2645d18936ae:/src# gcc --print-file-name=libc.a
/lib/x86_64-linux-gnu/libc.a
root@2645d18936ae:/src#

```

## 在命令行中预定义宏

```bash
gcc -D DEBUG macro.c
gcc -DDEBUG=10 macro.c
```

## 在命令行中取消宏定义

如果在代码中定义的宏，不能使用 -U 取消
-U 只能取消命令行中定义的宏

```bash
gcc -U DEBUG macro.c
gcc -UDEBUG macro.c
```

## 把选项传给汇编器

```bash
gcc -c as.c
objdump -d as.o

# 逗号和选择之间不能有空格
gcc -c -Wa,-L as.c # -L 是汇编器 as 的选项
```

## 生成有详细信息的汇编文件

```bash
gcc -S as.c
cat as.s

gcc -S -fverbose-asm as.c
cat as.s
```

## 检查内存访问错误, 检查内存释放错误

* [Program Instrumentation Options 程序检测选项](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

```bash
gcc -g -fsanitize=address

```

## 检查数据竞争问题

```bash
gcc -g -fsanitize=thread -fPIE -pie
```

## 把选择传给链接器

```bash
gcc -Wl,-Map=out.map foo.c
cat out.map
```

## 设置动态链接器

```bash

```

## 只做语法检查

```bash
gcc -fsyntax-only
```

## 保存临时文件

```bash
gcc -sava-temps
gcc -sava-temps=obj
```

## 指定语言类型

```bash
gcc -x c foo.c
```

## 改变结构体成员的字节对齐

```bash
gcc -fpack-struct=2
```
