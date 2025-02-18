/**
野指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

野指针就是指针指向的位置是不可知的(随机的, 不正确的, 没有明确限制的)

 */

#include <stdio.h>

////////////////////////  野指针成因 2. 指针越界访问  ////////////////////////
int main(void)
{
	/**
    0   1   2                           9    10   11   12
	|   |   |                           |    |    |    |
    V   V   V                           V    V    V    V
	| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |    |    |

	 */
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = &arr[0];
	int i = 0;
	for (i = 0; i <= 11; i++) {
		*(p++) = i;
		// 等价于
		// *p = i;
		// p++;
	}

	p = &arr[0];
	for (i = 0; i <= 11; i++) {
		printf("*(p++) = %d\n", *(p++));
	}
	return 0;
}

/**

$ ./main
*(p++) = 0
*(p++) = 1
*(p++) = 2
*(p++) = 3
*(p++) = 4
*(p++) = 5
*(p++) = 6
*(p++) = 7
*(p++) = 8
*(p++) = 9
*(p++) = 10
*(p++) = 11
$

 */
