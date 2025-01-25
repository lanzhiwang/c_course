/**
sizeof

 */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
	size_t a = sizeof(int);	// a = 4
	size_t b = sizeof(float);	// b = 4
	size_t c = sizeof(5);	// c = 4
	size_t d = sizeof(5.143);	// d = 8
	size_t e = sizeof a;	// e = 8
	printf("a = %ld, b = %ld, c = %ld, d = %ld, e = %ld\n", a, b, c, d, e);	// a = 4, b = 4, c = 4, d = 8, e = 8

	int arr1[5] = { 0, 1, 2, 3, 4 };
	int arr2[5] = { 0, 1 };
	printf("sizeof(arr1) = %ld\n", sizeof(arr1));	// sizeof(arr1) = 20
	printf("sizeof(arr1[0]) = %ld\n", sizeof(arr1[0]));	// sizeof(arr1[0]) = 4
	printf("sizeof(arr2) = %ld\n", sizeof(arr2));	// sizeof(arr2) = 20
	printf("sizeof(arr2[0]) = %ld\n", sizeof(arr2[0]));	// sizeof(arr2[0]) = 4

	char blue[26];
	char yellow[26] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	char orange[26] = "orange";
	char gray[] = { 'g', 'r', 'a', 'y', '\0' };
	char salmon[] = "salmon";
	printf("strlen(blue) = %ld, sizeof(blue) = %ld\n", strlen(blue), sizeof(blue));	// strlen(blue) = 0, sizeof(blue) = 26
	printf("strlen(yellow) = %ld, sizeof(yellow) = %ld\n", strlen(yellow), sizeof(yellow));	// strlen(yellow) = 6, sizeof(yellow) = 26
	printf("strlen(orange) = %ld, sizeof(orange) = %ld\n", strlen(orange), sizeof(orange));	// strlen(orange) = 6, sizeof(orange) = 26
	printf("strlen(gray) = %ld, sizeof(gray) = %ld\n", strlen(gray), sizeof(gray));	// strlen(gray) = 4, sizeof(gray) = 5
	printf("strlen(salmon) = %ld, sizeof(salmon) = %ld\n", strlen(salmon), sizeof(salmon));	// strlen(salmon) = 6, sizeof(salmon) = 7

	return 0;
}
