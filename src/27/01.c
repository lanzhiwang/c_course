/**
字符分类函数

* https://cplusplus.com/reference/cctype/

isalnum		Check if character is alphanumeric (function)
isalpha		Check if character is alphabetic (function)
isblank		Check if character is blank (function)
iscntrl		Check if character is a control character (function)
isdigit		Check if character is decimal digit (function)
isgraph		Check if character has graphical representation (function)
islower		Check if character is lowercase letter (function)
isprint		Check if character is printable (function)
ispunct		Check if character is a punctuation character (function)
isspace		Check if character is a white-space (function)
isupper		Check if character is uppercase letter (function)
isxdigit	Check if character is hexadecimal digit (function)

tolower		Convert uppercase letter to lowercase (function)
toupper		Convert lowercase letter to uppercase (function)

 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("islower(X) = %d\n", islower('X'));

	return 0;
}

/**

$ ./main
islower(X) = 0
$

 */
