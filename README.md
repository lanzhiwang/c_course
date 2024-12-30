# C 语言学习

## 视频教程:

1. [C语音深入剖析班（国嵌唐老师主讲）（直戳C语言的本质）](https://www.bilibili.com/video/BV1sL4y1B73X?p=1)

2. [GCC编译器使用入门培训](https://www.bilibili.com/video/BV1rJ411V7EV/)

3. 抖音鹏哥C语言第一课

## 相关链接和资料

* [GCC](https://gcc.gnu.org/)
* [gcc onlinedocs](https://gcc.gnu.org/onlinedocs/)
* [C 预处理器](https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/)
* [使用 GNU 编译器集合 (GCC)](https://gcc.gnu.org/onlinedocs/gcc-14.2.0/gcc/)
* [the GNU assembler as](https://sourceware.org/binutils/docs/as/)
* [链接](https://gcc.gnu.org/onlinedocs/gcc-14.2.0/gcc/Link-Options.html)

* [c reference](https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html)
* [The GNU C Library (glibc)](https://www.gnu.org/software/libc/), GCC 不提供 GNU C 库（称为 glibc）

* [binutils](https://www.gnu.org/software/binutils/)

* [automake, autoconf使用详解](https://www.laruence.com/2009/11/18/1154.html)

## 使用方法

```bash
docker run -ti --rm \
-v ~/work/code/c_code/c_course/code:/code \
-w /code \
gcc:12.4.0 \
bash



find . -name "*.c" -exec sh ./Lindent.sh {} \; && find . -name "*.h" -exec sh ./Lindent.sh {} \; && find . -name "*.c~" -exec rm -rf {} \; && find . -name "*.h~" -exec rm -rf {} \;


```

