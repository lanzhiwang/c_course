/**

memcmp
int memcmp ( const void * ptr1, const void * ptr2, size_t num );

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";

	int n;

	n = memcmp(buffer1, buffer2, sizeof(buffer1));

	if (n > 0)
		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if (n < 0)
		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else
		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);

	return 0;
}

/**

$ ./main
'DWgaOtP12df0' is greater than 'DWGAOTP12DF0'.
$

 */
