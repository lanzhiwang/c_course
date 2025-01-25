/**

# signed unsigned

- signed char

- unsigned char

- char

- short int
  short
  signed short int
  signed short

- unsigned short int
  unsigned short

- int
  signed int
  signed

- unsigned int
  unsigned

- long int
  long
  signed long int
  signed long

- unsigned long int
  unsigned long

- long long int
  long long
  signed long long int
  signed long long

- unsigned long long int
  unsigned long long

- float

- double

- long double

# limits.h
name        expresses
CHAR_BIT    Number of bits in a char object (byte)
SCHAR_MIN   Minimum value for an object of type signed char
SCHAR_MAX   Maximum value for an object of type signed char
UCHAR_MAX   Maximum value for an object of type unsigned char
CHAR_MIN    Minimum value for an object of type char
CHAR_MAX    Maximum value for an object of type char
MB_LEN_MAX  Maximum number of bytes in a multibyte character, for any locale
SHRT_MIN    Minimum value for an object of type short int
SHRT_MAX    Maximum value for an object of type short int
USHRT_MAX   Maximum value for an object of type unsigned short int
INT_MIN     Minimum value for an object of type int
INT_MAX     Maximum value for an object of type int
UINT_MAX    Maximum value for an object of type unsigned int
LONG_MIN    Minimum value for an object of type long int
LONG_MAX    Maximum value for an object of type long int
ULONG_MAX   Maximum value for an object of type unsigned long int
LLONG_MIN   Minimum value for an object of type long long int
LLONG_MAX   Maximum value for an object of type long long int
ULLONG_MAX  Maximum value for an object of type unsigned long long int

 */

#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int main(void)
{
	printf("sizeof(signed char) = %ld\n", sizeof(signed char));
	printf("sizeof(unsigned char) = %ld\n", sizeof(unsigned char));
	printf("sizeof(char) = %ld\n", sizeof(char));
	printf("sizeof(short int) = %ld\n", sizeof(short int));
	printf("sizeof(short) = %ld\n", sizeof(short));
	printf("sizeof(signed short int) = %ld\n", sizeof(signed short int));
	printf("sizeof(signed short) = %ld\n", sizeof(signed short));
	printf("sizeof(unsigned short int) = %ld\n",
	       sizeof(unsigned short int));
	printf("sizeof(unsigned short) = %ld\n", sizeof(unsigned short));
	printf("sizeof(int) = %ld\n", sizeof(int));
	printf("sizeof(signed int) = %ld\n", sizeof(signed int));
	printf("sizeof(signed) = %ld\n", sizeof(signed));
	printf("sizeof(unsigned int) = %ld\n", sizeof(unsigned int));
	printf("sizeof(unsigned) = %ld\n", sizeof(unsigned));
	printf("sizeof(long int) = %ld\n", sizeof(long int));
	printf("sizeof(long) = %ld\n", sizeof(long));
	printf("sizeof(signed long int) = %ld\n", sizeof(signed long int));
	printf("sizeof(signed long) = %ld\n", sizeof(signed long));
	printf("sizeof(unsigned long int) = %ld\n", sizeof(unsigned long int));
	printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned long));
	printf("sizeof(long long int) = %ld\n", sizeof(long long int));
	printf("sizeof(long long) = %ld\n", sizeof(long long));
	printf("sizeof(signed long long int) = %ld\n",
	       sizeof(signed long long int));
	printf("sizeof(signed long long) = %ld\n", sizeof(signed long long));
	printf("sizeof(unsigned long long int) = %ld\n",
	       sizeof(unsigned long long int));
	printf("sizeof(unsigned long long) = %ld\n",
	       sizeof(unsigned long long));
	printf("sizeof(float) = %ld\n", sizeof(float));
	printf("sizeof(double) = %ld\n", sizeof(double));
	printf("sizeof(long double) = %ld\n", sizeof(long double));

	return 0;

}

/**

$ ./main
sizeof(signed char) = 1
sizeof(unsigned char) = 1
sizeof(char) = 1
sizeof(short int) = 2
sizeof(short) = 2
sizeof(signed short int) = 2
sizeof(signed short) = 2
sizeof(unsigned short int) = 2
sizeof(unsigned short) = 2
sizeof(int) = 4
sizeof(signed int) = 4
sizeof(signed) = 4
sizeof(unsigned int) = 4
sizeof(unsigned) = 4
sizeof(long int) = 8
sizeof(long) = 8
sizeof(signed long int) = 8
sizeof(signed long) = 8
sizeof(unsigned long int) = 8
sizeof(unsigned long) = 8
sizeof(long long int) = 8
sizeof(long long) = 8
sizeof(signed long long int) = 8
sizeof(signed long long) = 8
sizeof(unsigned long long int) = 8
sizeof(unsigned long long) = 8
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 16
$

 */
