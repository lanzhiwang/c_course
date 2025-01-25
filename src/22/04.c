/**
字符串和字符数组

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char blue[26];
	char yellow[26] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	char orange[26] = "orange";
	char gray[] = { 'g', 'r', 'a', 'y', '\0' };
	char salmon[] = "salmon";
	char other1[] =
	    { 'H', 'e', 'l', 'l', 'o', 0x00, 'W', 'o', 'r', 'l', 'd', 0x00,
		'\0'
	};
	char other2[3] = { 'H', 'e', 'l' };
	char other3[3] = "Hel";
	char other4[4] = { 'H', 'e', 'l' };

	printf("strlen(blue) = %ld, sizeof(blue) = %ld\n", strlen(blue), sizeof(blue));	// strlen(blue) = 0, sizeof(blue) = 26
	printf("strlen(yellow) = %ld, sizeof(yellow) = %ld\n", strlen(yellow), sizeof(yellow));	// strlen(yellow) = 6, sizeof(yellow) = 26
	printf("strlen(orange) = %ld, sizeof(orange) = %ld\n", strlen(orange), sizeof(orange));	// strlen(orange) = 6, sizeof(orange) = 26
	printf("strlen(gray) = %ld, sizeof(gray) = %ld\n", strlen(gray), sizeof(gray));	// strlen(gray) = 4, sizeof(gray) = 5
	printf("strlen(salmon) = %ld, sizeof(salmon) = %ld\n", strlen(salmon), sizeof(salmon));	// strlen(salmon) = 6, sizeof(salmon) = 7
	printf("strlen(other1) = %ld, sizeof(other1) = %ld\n", strlen(other1), sizeof(other1));	// strlen(other1) = 5, sizeof(other1) = 13
	printf("strlen(other2) = %ld, sizeof(other2) = %ld\n", strlen(other2), sizeof(other2));	// strlen(other2) = 8, sizeof(other2) = 3  字符串长度不一定
	printf("strlen(other3) = %ld, sizeof(other3) = %ld\n", strlen(other3), sizeof(other3));	// strlen(other3) = 11, sizeof(other3) = 3
	printf("strlen(other4) = %ld, sizeof(other4) = %ld\n", strlen(other4), sizeof(other4));	// strlen(other4) = 3, sizeof(other4) = 4
	return 0;
}

/**

$ ./main
strlen(blue) = 0, sizeof(blue) = 26
strlen(yellow) = 6, sizeof(yellow) = 26
strlen(orange) = 6, sizeof(orange) = 26
strlen(gray) = 4, sizeof(gray) = 5
strlen(salmon) = 6, sizeof(salmon) = 7
strlen(other1) = 5, sizeof(other1) = 13
strlen(other2) = 8, sizeof(other2) = 3
strlen(other3) = 11, sizeof(other3) = 3
strlen(other4) = 3, sizeof(other4) = 4
$

 */
