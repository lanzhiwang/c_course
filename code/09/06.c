
/**
# putchar

int putchar ( int character );

Write character to stdout

Writes a character to the standard output (stdout).

It is equivalent to calling putc with stdout as second argument.

# Parameters

character

The int promotion of the character to be written.

The value is internally converted to an unsigned char when written.

# Return Value

On success, the character written is returned.

If a writing error occurs, EOF is returned and the error indicator (ferror) is set.

 */

#include <stdio.h>

int main(void)
{
	int ch = 'a';
	int r = putchar(ch);
	printf("r = |%c|\n", r);

	return 0;
}

/**
# ./main
ar = |a|
#
 */
