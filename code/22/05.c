/**
字符串和字符数组

# gets

char * gets( char * str );

Get string from stdin  从 stdin 获取字符串
[NOTE: This function is no longer available in C or C++ (as of C11 & C++14)]
[注意: 此功能在C或C++中不再可用(从C11和C++14开始)]

Reads characters from the standard input (stdin) and stores them as a C string into str until a newline character or the end-of-file is reached.
从标准输入 (stdin) 中读取字符, 并将其作为 C 字符串存储到 str 中, 直到到达换行符或文件末尾. 

The newline character, if found, is not copied into str.
如果找到换行符, 则不会将其复制到 str 中. 

A terminating null character is automatically appended after the characters copied to str.
终止 null 字符会自动附加到复制到 str 的字符之后. 

Notice that gets is quite different from fgets: not only gets uses stdin as source, but it does not include the ending newline character in the resulting string and does not allow to specify a maximum size for str (which can lead to buffer overflows).
请注意, 这与 gets fgets 完全不同: 不仅 gets 使用 stdin 作为源, 而且它在结果字符串中不包含结束换行符, 并且不允许指定 str 的最大大小(这可能导致缓冲区溢出). 

# Parameters

str
Pointer to a block of memory (array of char) where the string read is copied as a C string.
指向内存块(数组 char )的指针, 其中字符串 read 被复制为 C 字符串. 

# Return Value
On success, the function returns str.
成功后, 该函数返回 str. 

If the end-of-file is encountered while attempting to read a character, the eof indicator is set (feof). If this happens before any characters could be read, the pointer returned is a null pointer (and the contents of str remain unchanged).
如果在尝试读取字符时遇到文件结尾, 则设置 eof 指示符 (feof). 如果在读取任何字符之前发生这种情况, 则返回的指针为空指针(并且 str 的内容保持不变). 

If a read error occurs, the error indicator (ferror) is set and a null pointer is also returned (but the contents pointed by str may have changed).
如果发生读取错误, 则设置错误指示符 (ferror) 并返回 null 指针(但 str 指向的内容可能已更改). 

 */

#include <stdio.h>

int main(void)
{
	char string[256];
	printf("Insert your full address: ");
	gets(string);		// warning: unsafe (see fgets instead)
	printf("Your address is: %s\n", string);

	return 0;
}

/**

# ./main
Insert your full address: hello world
Your address is: hello world
#

 */
