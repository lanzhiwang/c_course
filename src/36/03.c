/**
#define
#undef

https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Object-like-Macros.html
 */

#include <stdio.h>

#define reg register		// 为 register 关键字创建一个简短的名称

int main(void)
{
	register int m = 200;	// register 关键字指示变量 m 应该放在寄存器中
	reg int n = 300;
	printf("m = %d\n", m);
	printf("n = %d\n", n);

	return 0;
}
