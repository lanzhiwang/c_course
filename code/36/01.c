/**
预定义符号
https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Predefined-Macros.html
 */

#include <stdio.h>
int main(void)
{
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);

	return 0;
}
