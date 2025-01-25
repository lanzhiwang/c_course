#include <stdio.h>

/**
char *argv[] 表示的数据类型是 指针数组

 */
int main(int argc, char *argv[])
{
	int counter;
	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return 0;
}

/**

$ ./main abc def ghi
./main
abc
def
ghi
$

 */
