/**
字符和 ASCII 编码

 */

#include <stddef.h>
#include <stdio.h>
#include <uchar.h>

int main(void)
{
	printf("constant    value     \n");
	printf("--------    ----------\n");

	// 整数字符常量
	int c1 = 'a';
	printf("'a':\t %#010x\n", c1);
	int c2 = '🍌';
	printf("'🍌':\t %#010x\n\n", c2);	// 实现定义

	// 多字符常量
	int c3 = 'ab';
	printf("'ab':\t %#010x\n\n", c3);	// 实现定义

	// 16 位宽字符常量
	char16_t uc1 = u 'a';
	printf("'a':\t %#010x\n", (int)uc1);
	char16_t uc2 = u '¢';
	printf("'¢':\t %#010x\n", (int)uc2);
	char16_t uc3 = u '猫';
	printf("'猫':\t %#010x\n", (int)uc3);
	// 实现定义（🍌 映射到二个 16 位宽字符）
	char16_t uc4 = u '🍌';
	printf("'🍌':\t %#010x\n\n", (int)uc4);

	// 32 位宽字符常量
	char32_t Uc1 = U 'a';
	printf("'a':\t %#010x\n", (int)Uc1);
	char32_t Uc2 = U '¢';
	printf("'¢':\t %#010x\n", (int)Uc2);
	char32_t Uc3 = U '猫';
	printf("'猫':\t %#010x\n", (int)Uc3);
	char32_t Uc4 = U '🍌';
	printf("'🍌':\t %#010x\n\n", (int)Uc4);

	// 宽字符常量
	wchar_t wc1 = L'a';
	printf("'a':\t %#010x\n", (int)wc1);
	wchar_t wc2 = L'¢';
	printf("'¢':\t %#010x\n", (int)wc2);
	wchar_t wc3 = L'猫';
	printf("'猫':\t %#010x\n", (int)wc3);
	wchar_t wc4 = L'🍌';
	printf("'🍌':\t %#010x\n\n", (int)wc4);
}

/**
# ./main
constant    value
--------    ----------
'a':	 0x00000061
'🍌':	 0xf09f8d8c

'ab':	 0x00006162

'a':	 0x00000061
'¢':	 0x000000a2
'猫':	 0x0000732b
'🍌':	 0x0000df4c

'a':	 0x00000061
'¢':	 0x000000a2
'猫':	 0x0000732b
'🍌':	 0x0001f34c

'a':	 0x00000061
'¢':	 0x000000a2
'猫':	 0x0000732b
'🍌':	 0x0001f34c

#
 */
