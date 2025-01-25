/**

strcpy
char * strcpy ( char * destination, const char * source );

strncpy
char * strncpy ( char * destination, const char * source, size_t num );

 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

	// 源字符串必须以 \0 结尾
	char source1[] = { 'a', 'b', 'c' };
	char destination1[40];
	strcpy(destination1, source1);
	printf("source1: %s\ndestination1: %s\n", source1, destination1);

	// 拷贝之后的目标字符串末尾也拷贝了 \0
	char source2[] = { 'a', 'b', 'c', '\0' };
	char destination2[8] = "xxxxxxx";
	printf("*(destination2 + 0) = %2x\n", *(destination2 + 0));
	printf("*(destination2 + 1) = %2x\n", *(destination2 + 1));
	printf("*(destination2 + 2) = %2x\n", *(destination2 + 2));
	printf("*(destination2 + 3) = %2x\n", *(destination2 + 3));
	printf("*(destination2 + 4) = %2x\n", *(destination2 + 4));
	printf("*(destination2 + 5) = %2x\n", *(destination2 + 5));
	printf("*(destination2 + 6) = %2x\n", *(destination2 + 6));
	printf("*(destination2 + 7) = %2x\n", *(destination2 + 7));
	printf("*(destination2 + 8) = %2x\n", *(destination2 + 8));

	strcpy(destination2, source2);
	printf("source2: %s\ndestination2: %s\n", source2, destination2);
	printf("*(destination2 + 0) = %2x\n", *(destination2 + 0));
	printf("*(destination2 + 1) = %2x\n", *(destination2 + 1));
	printf("*(destination2 + 2) = %2x\n", *(destination2 + 2));
	printf("*(destination2 + 3) = %2x\n", *(destination2 + 3));
	printf("*(destination2 + 4) = %2x\n", *(destination2 + 4));
	printf("*(destination2 + 5) = %2x\n", *(destination2 + 5));
	printf("*(destination2 + 6) = %2x\n", *(destination2 + 6));
	printf("*(destination2 + 7) = %2x\n", *(destination2 + 7));
	printf("*(destination2 + 8) = %2x\n", *(destination2 + 8));

	// char source3[] = {'a', 'b', 'c', '\0'};
	// char * destination3 = "xxxxxxx";  // 常量字符串不能被修改  Segmentation fault
	// strcpy(destination3, source3);
	// printf("source3: %s\ndestination3: %s\n", source3, destination3);
	char *p = "abcdef";
	printf("*p = %c\n", *p);
	printf("*(p + 1) = %c\n", *(p + 1));
	printf("*(p + 2) = %c\n", *(p + 2));
	printf("*(p + 3) = %c\n", *(p + 3));
	// *(p + 2) = 'A';  // Segmentation fault
	printf("*(p + 2) = %c\n", *(p + 2));

	// 目标空间必须足够大
	char source4[] = { 'a', 'b', 'c', '\0' };
	char destination4[2] = "x";
	printf("source4: %s\ndestination4: %s\n", source4, destination4);
	strcpy(destination4, source4);
	printf("source4: %s\ndestination4: %s\n", source4, destination4);

	return 0;
}

/**

$ ./main
str1: Sample string
str2: Sample string
str3: copy successful
source1: abccopy successful
destination1: abccopy successful
*(destination2 + 0) = 78
*(destination2 + 1) = 78
*(destination2 + 2) = 78
*(destination2 + 3) = 78
*(destination2 + 4) = 78
*(destination2 + 5) = 78
*(destination2 + 6) = 78
*(destination2 + 7) =  0
*(destination2 + 8) = 61
source2: abc
destination2: abc
*(destination2 + 0) = 61
*(destination2 + 1) = 62
*(destination2 + 2) = 63
*(destination2 + 3) =  0
*(destination2 + 4) = 78
*(destination2 + 5) = 78
*(destination2 + 6) = 78
*(destination2 + 7) =  0
*(destination2 + 8) = 61
source4: abc
destination4: x
source4: c
destination4: abc
$

 */
