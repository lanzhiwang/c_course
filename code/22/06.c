/**
字符串和字符数组

# puts

int puts ( const char * str );

Write string to stdout  将字符串写入 stdout

Writes the C string pointed by str to the standard output (stdout) and appends a newline character ('\n').
将 str 指向的 C 字符串写入标准输出 (stdout) 并附加换行符 ( '\n' ). 

The function begins copying from the address specified (str) until it reaches the terminating null character ('\0'). This terminating null-character is not copied to the stream.
该函数从指定的地址 (str) 开始复制, 直到到达终止 null 字符 ( '\0' ). 此终止 null 字符不会复制到流中. 

Notice that puts not only differs from fputs in that it uses stdout as destination, but it also appends a newline character at the end automatically (which fputs does not).
请注意, 它与 puts fputs 的不同之处在于它使用 stdout 作为目标, 而且还会自动在末尾附加一个换行符(而 fputs 则不会). 

# Parameters
str
C string to be printed.
要打印的 C 字符串. 

# Return Value
On success, a non-negative value is returned.
成功后, 将返回非负值. 

On error, the function returns EOF and sets the error indicator (ferror).
出错时, 该函数返回 EOF 并设置错误指示符 (ferror). 

 */

#include <stdio.h>

int main(void)
{
	char string[] = "Hello world!";
	puts(string);

	return 0;
}

/**
# ./main
Hello world!
#
 */
