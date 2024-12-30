#include <stdio.h>

int main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d-%d-%d", &year, &month, &day);
	printf("year = %d, month = %d, day = %d\n", year, month, day);
	return 0;
}

/**
# ./main
2014-12-19
year = 2014, month = 12, day = 19
#

# ./main
2014 12 19
year = 2014, month = 0, day = 0
#

 */
