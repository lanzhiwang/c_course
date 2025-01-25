/**
 函数

 函数的声明和定义

 在多个文件中, 使用多个源文件的形式实现

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
|-- 10.c
|-- leap.c

1 directory, 2 files
$

$ gcc -Wall 10.c leap.c -o main
$

$ ./main
2001 是平年
2002 是平年
2003 是平年
2004 是闰年
2005 是平年
2006 是平年
2007 是平年
2008 是闰年
2009 是平年
2010 是平年
2011 是平年
2012 是闰年
2013 是平年
2014 是平年
2015 是平年
2016 是闰年
2017 是平年
2018 是平年
2019 是平年
2020 是闰年
2021 是平年
2022 是平年
2023 是平年
2024 是闰年
2025 是平年
g_val = 2024
$

 */
