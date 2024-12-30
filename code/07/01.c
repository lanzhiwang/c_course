#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("请输入分数: ");
	scanf("%d", &score);
	printf("score = %d\n", score);
	return 0;
}

/**
# ./main
请输入分数: 100
score = 100
#
 */
