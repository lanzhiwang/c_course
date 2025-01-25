/**

strcat
追加

char * strcat ( char * destination, const char * source );

strncat
char * strncat ( char * destination, const char * source, size_t num );

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[9] = { 'x' };
	for (size_t i = 0; i < 9; i++) {
		str[i] = 'x';
	}

	for (size_t i = 0; i < 9; i++) {
		printf("*(str + %ld) = %2x\n", i, *(str + i));
	}

	strcpy(str, "abc ");
	strcat(str, "def.");
	puts(str);

	for (size_t i = 0; i < 9; i++) {
		printf("*(str + %ld) = %2x\n", i, *(str + i));
	}

	return 0;
}

/**

$ ./main
*(str + 0) = 78
*(str + 1) = 78
*(str + 2) = 78
*(str + 3) = 78
*(str + 4) = 78
*(str + 5) = 78
*(str + 6) = 78
*(str + 7) = 78
*(str + 8) = 78
abc def.
*(str + 0) = 61
*(str + 1) = 62
*(str + 2) = 63
*(str + 3) = 20
*(str + 4) = 64
*(str + 5) = 65
*(str + 6) = 66
*(str + 7) = 2e
*(str + 8) =  0
$

 */
