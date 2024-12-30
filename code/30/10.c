#include <stdio.h>

/**
typedef 对结构体重命名
 */

// struct Point {
//      int x;
//      int y;
// };

/**
typedef struct Point {
     int x;
     int y;
} Point;

等价于

struct Point {
	int x;
	int y;
};

typedef struct Point Point;

 */

struct Point {
	int x;
	int y;
};

typedef struct Point Point;

int main(void)
{
	struct Point p1 = { 5, 7 };
	printf("x = %d y = %d\n", p1.x, p1.y);	// x = 5 y = 7
	Point p2 = { 0 };
	printf("x = %d y = %d\n", p2.x, p2.y);	// x = 0 y = 0

	return 0;
}

/**

# ./main
x = 5 y = 7
x = 0 y = 0
#

 */
