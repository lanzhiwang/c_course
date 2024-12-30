#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	float x = 0.0;
	float y = 0.0;
	scanf("%d%d%f%f", &i, &j, &x, &y);
	printf("i = %d, j = %d, x = %f, y = %e\n", i, j, x, y);
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
	return 0;
}

/**

# ./main
1 -20 3.4 -4.0e3
i = 1, j = -20, x = 3.400000, y = -4.000000e+03
i = 1, j = -20, x = 3.400000, y = -4000.000000
#

# ./main
1
-20
3.4
-4.0e3
i = 1, j = -20, x = 3.400000, y = -4.000000e+03
i = 1, j = -20, x = 3.400000, y = -4000.000000
#

# ./main
1	-20
3.4	-4.0e3
i = 1, j = -20, x = 3.400000, y = -4.000000e+03
i = 1, j = -20, x = 3.400000, y = -4000.000000
#

 */