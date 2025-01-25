/**
函数

static 关键字

1. static 修饰局部变量
2. static 修饰全局变量
3. static 修饰函数

static 修饰全局变量和函数
全局变量和函数本来具有外部链接属性, 而被 static 修饰之后, 外部链接属性就变成了内部链接属性,
被 static 修饰的全局变量和函数只能在自己所在的源文件内部使用, 无法再其他源文件中使用

3. static 修饰函数

 */

#include <stdio.h>

extern int is_leap_year(int y);	// 声明其他源文件中定义的函数(也就是声明外部函数)
extern int g_val;		// 声明其他源文件中定义的全局变量(也就是声明外部变量)

int main(void)
{
	for (size_t i = 2001; i <= 2025; i++) {
		int r = is_leap_year(i);	// 函数的调用
		if (r == 1) {
			printf("%ld 是闰年\n", i);
		} else {
			printf("%ld 是平年\n", i);
		}
	}
	printf("g_val = %d\n", g_val);

	return 0;
}

/**

$ tree -a
.
|-- 13.c
|-- leap.c

1 directory, 2 files
$

$ gcc -Wall 13.c -o main
/usr/bin/ld: /tmp/ccNQJX7i.o: in function `main':
13.c:(.text+0x19): undefined reference to `is_leap_year'
/usr/bin/ld: 13.c:(.text+0x65): undefined reference to `g_val'
collect2: error: ld returned 1 exit status
$

 */
