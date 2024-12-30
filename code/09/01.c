/**

# getchar

int getchar ( void );

Get character from stdin

Returns the next character from the standard input (stdin).

It is equivalent to calling getc with stdin as argument.

# Parameters
(none)

# Return Value
On success, the character read is returned (promoted to an int value).
The return type is int to accommodate for the special value EOF, which indicates failure:
If the standard input was at the end-of-file, the function returns EOF and sets the eof indicator (feof) of stdin.
If some other reading error happens, the function also returns EOF, but sets its error indicator (ferror) instead.

 */

#include <stdio.h>

int main(void)
{
	int ch;
	ch = getchar();
	printf("|%c|\n", ch);

	return 0;
}

/**
# ./main
abc
|a|
#

# ./main
 abc
| |
#

# ./main
	abc
|	|
#

 */
