/**
回调函数

 */

#include <stdio.h>

void vakeup_fun1(void)
{
	printf("vakeup_fun1\n");
}

void vakeup_fun2(void)
{
	printf("vakeup_fun2\n");
}

void vakeup_fun3(void)
{
	printf("vakeup_fun3\n");
}

void vakeup_service(const char *arr, int time, void (*pf)())
{
	printf("%s, %d\n", arr, time);
	pf();

}

int main(void)
{
	vakeup_service("zhangsan", 10, vakeup_fun1);
	vakeup_service("lisi", 23, vakeup_fun2);
	vakeup_service("wangwu", 18, vakeup_fun3);
	return 0;
}

/**

# ./main
zhangsan, 10
vakeup_fun1
lisi, 23
vakeup_fun2
wangwu, 18
vakeup_fun3
#

 */
