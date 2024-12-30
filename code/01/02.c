#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;
	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return 0;
}

/**
# ./main abc def ghi
./main
abc
def
ghi
#
 */
