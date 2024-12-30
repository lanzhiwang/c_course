#include <stdio.h>

/**
结构体的自引用
 */

struct Node {
	int data;
	/*
	   07.c:9:21: error: field 'next1' has incomplete type
	 */
	// struct Node next1;
	struct Node *next2;
};

int main(void)
{
	printf("%ld\n", sizeof(struct Node));
	return 0;
}

/**

# ./main
16
#

 */
