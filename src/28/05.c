/**

strcpy
char * strcpy ( char * destination, const char * source );

strncpy
char * strncpy ( char * destination, const char * source, size_t num );

 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strcpy1(char *destination, const char *source)
{
	assert(source != NULL);
	assert(destination != NULL);
	char *result = destination;

	while (*source != '\0') {
		*destination = *source;
		source++;
		destination++;
	}
	// *destination = '\0';
	return result;

}

char *my_strcpy2(char *destination, const char *source)
{
	assert(source != NULL);
	assert(destination != NULL);
	char *result = destination;

	while (*source != '\0') {
		*(destination++) = *(source++);	// *destination++ = *source++;  ++ 的优先级高于 *
	}
	*destination = '\0';
	return result;

}

char *my_strcpy3(char *destination, const char *source)
{
	assert(source != NULL);
	assert(destination != NULL);
	char *result = destination;

	while ((*(destination++) = *(source++)) != '\0') {
		;
	}
	return result;

}

int main(void)
{
	char str1[] = "abc";
	printf("*(str1 + 0) = %2x\n", *(str1 + 0));
	printf("*(str1 + 1) = %2x\n", *(str1 + 1));
	printf("*(str1 + 2) = %2x\n", *(str1 + 2));
	printf("*(str1 + 3) = %2x\n", *(str1 + 3));
	printf("\n");

	char str2[4] = { 'x', 'x', 'x', 'x' };
	printf("*(str2 + 0) = %2x\n", *(str2 + 0));
	printf("*(str2 + 1) = %2x\n", *(str2 + 1));
	printf("*(str2 + 2) = %2x\n", *(str2 + 2));
	printf("*(str2 + 3) = %2x\n", *(str2 + 3));
	strcpy(str2, str1);
	printf("---------\n");
	printf("*(str2 + 0) = %2x\n", *(str2 + 0));
	printf("*(str2 + 1) = %2x\n", *(str2 + 1));
	printf("*(str2 + 2) = %2x\n", *(str2 + 2));
	printf("*(str2 + 3) = %2x\n", *(str2 + 3));
	printf("\n");

	char str3[4] = { 'x', 'x', 'x', 'x' };
	my_strcpy1(str3, str1);
	printf("*(str3 + 0) = %2x\n", *(str3 + 0));
	printf("*(str3 + 1) = %2x\n", *(str3 + 1));
	printf("*(str3 + 2) = %2x\n", *(str3 + 2));
	printf("*(str3 + 3) = %2x\n", *(str3 + 3));
	printf("\n");

	char str4[4] = { 'x', 'x', 'x', 'x' };
	my_strcpy2(str4, str1);
	printf("*(str4 + 0) = %2x\n", *(str4 + 0));
	printf("*(str4 + 1) = %2x\n", *(str4 + 1));
	printf("*(str4 + 2) = %2x\n", *(str4 + 2));
	printf("*(str4 + 3) = %2x\n", *(str4 + 3));
	printf("\n");

	char str5[4] = { 'x', 'x', 'x', 'x' };
	my_strcpy3(str5, str1);
	printf("*(str5 + 0) = %2x\n", *(str5 + 0));
	printf("*(str5 + 1) = %2x\n", *(str5 + 1));
	printf("*(str5 + 2) = %2x\n", *(str5 + 2));
	printf("*(str5 + 3) = %2x\n", *(str5 + 3));
	printf("\n");

	return 0;
}

/**

$ ./main
*(str1 + 0) = 61
*(str1 + 1) = 62
*(str1 + 2) = 63
*(str1 + 3) =  0

*(str2 + 0) = 78
*(str2 + 1) = 78
*(str2 + 2) = 78
*(str2 + 3) = 78
---------
*(str2 + 0) = 61
*(str2 + 1) = 62
*(str2 + 2) = 63
*(str2 + 3) =  0

*(str3 + 0) = 61
*(str3 + 1) = 62
*(str3 + 2) = 63
*(str3 + 3) = 78

*(str4 + 0) = 61
*(str4 + 1) = 62
*(str4 + 2) = 63
*(str4 + 3) =  0

*(str5 + 0) = 61
*(str5 + 1) = 62
*(str5 + 2) = 63
*(str5 + 3) =  0

$

 */
