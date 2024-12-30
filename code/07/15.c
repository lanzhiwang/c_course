#include <stdio.h>

int main(void)
{
	/**
	scanf("%*[a-z]");
	scanf("%*[0-9]");
	 */
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("year = %d, month = %d, day = %d\n", year, month, day);
	return 0;
}

/**
# ./main
2024-12-19
year = 2024, month = 12, day = 19
#

# ./main
2024 12 19
year = 2024, month = 12, day = 19
#

 */
