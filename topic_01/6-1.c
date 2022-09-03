#include <stdio.h>

struct _null {
};

int main()
{
	struct _null n1;
	struct _null n2;
	printf("%ld\n", sizeof(struct _null));
	printf("%ld, %0x\n", sizeof(n1), &n1);
	printf("%ld, %0x\n", sizeof(n2), &n2);
}

/*
0
0, ff89e570
0, ff89e570
*/
