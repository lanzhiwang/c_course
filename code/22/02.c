/**
字符串和字符数组

1. C 语言中有 字符 类型, 但是没有 字符串 类型
2. 字符串使用双引号, 末尾隐藏一个 \0

 */

#include <stdio.h>

/**
 验证字符串末尾隐藏一个 \0
 */
int main(void)
{

	/**
	"orange" -> "orange\0"
	"salmon" -> "salmon\0"
	{ 'y', 'e', 'l', 'l', 'o', 'w', '\0' }
	{ 'b', 'l', 'u', 'e' }
	 */

	char s1[5] = "orange";
	/**
	(gdb) print s1
	$29 = "orang"
	(gdb) print s1[0]
	$30 = 111 'o'
	(gdb) print s1[1]
	$31 = 114 'r'
	(gdb) print s1[2]
	$32 = 97 'a'
	(gdb) print s1[3]
	$33 = 110 'n'
	(gdb) print s1[4]
	$34 = 103 'g'
	(gdb)
	  */

	char s2[6] = "orange";
	/**
	(gdb) print s2
	$21 = "orange"
	(gdb) print s2[0]
	$22 = 111 'o'
	(gdb) print s2[1]
	$23 = 114 'r'
	(gdb) print s2[2]
	$24 = 97 'a'
	(gdb) print s2[3]
	$25 = 110 'n'
	(gdb) print s2[4]
	$26 = 103 'g'
	(gdb) print s2[5]
	$27 = 101 'e'
	(gdb)
	 */

	char s3[7] = "orange";
	/**
	(gdb) print s3
	$12 = "orange"
	(gdb) print s3[0]
	$13 = 111 'o'
	(gdb) print s3[1]
	$14 = 114 'r'
	(gdb) print s3[2]
	$15 = 97 'a'
	(gdb) print s3[3]
	$16 = 110 'n'
	(gdb) print s3[4]
	$17 = 103 'g'
	(gdb) print s3[5]
	$18 = 101 'e'
	(gdb) print s3[6]
	$19 = 0 '\000'
	 */

	char s4[8] = "orange";
	/**
	(gdb) print s4
	$36 = "orange\000"
	(gdb) print s4[0]
	$37 = 111 'o'
	(gdb) print s4[1]
	$38 = 114 'r'
	(gdb) print s4[2]
	$39 = 97 'a'
	(gdb) print s4[3]
	$40 = 110 'n'
	(gdb) print s4[4]
	$41 = 103 'g'
	(gdb) print s4[5]
	$42 = 101 'e'
	(gdb) print s4[6]
	$43 = 0 '\000'
	(gdb) print s4[7]
	$44 = 0 '\000'
	(gdb)
	 */

	char s5[9] = "orange";
	/**
	(gdb) print s5
	$45 = "orange\000\000"
	(gdb) print s5[0]
	$46 = 111 'o'
	(gdb) print s5[1]
	$47 = 114 'r'
	(gdb) print s5[2]
	$48 = 97 'a'
	(gdb) print s5[3]
	$49 = 110 'n'
	(gdb) print s5[4]
	$50 = 103 'g'
	(gdb) print s5[5]
	$51 = 101 'e'
	(gdb) print s5[6]
	$52 = 0 '\000'
	(gdb) print s5[7]
	$53 = 0 '\000'
	(gdb) print s5[8]
	$54 = 0 '\000'
	(gdb)
	 */

	char s6[5] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	/**
	(gdb) print s6
	$55 = "yello"
	(gdb) print s6[0]
	$56 = 121 'y'
	(gdb) print s6[1]
	$57 = 101 'e'
	(gdb) print s6[2]
	$58 = 108 'l'
	(gdb) print s6[3]
	$59 = 108 'l'
	(gdb) print s6[4]
	$60 = 111 'o'
	(gdb)
	 */

	char s7[6] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	/**
	(gdb) print s7
	$61 = "yellow"
	(gdb) print s7[0]
	$62 = 121 'y'
	(gdb) print s7[1]
	$63 = 101 'e'
	(gdb) print s7[2]
	$64 = 108 'l'
	(gdb) print s7[3]
	$65 = 108 'l'
	(gdb) print s7[4]
	$66 = 111 'o'
	(gdb) print s7[5]
	$67 = 119 'w'
	(gdb)
	 */

	char s8[7] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	/**
	(gdb) print s8
	$70 = "yellow"
	(gdb) print s8[0]
	$71 = 121 'y'
	(gdb) print s8[1]
	$72 = 101 'e'
	(gdb) print s8[2]
	$73 = 108 'l'
	(gdb) print s8[3]
	$74 = 108 'l'
	(gdb) print s8[4]
	$75 = 111 'o'
	(gdb) print s8[5]
	$76 = 119 'w'
	(gdb) print s8[6]
	$77 = 0 '\000'
	(gdb)
	 */

	char s9[8] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	/**
	(gdb) print s9
	$78 = "yellow\000"
	(gdb) print s9[0]
	$79 = 121 'y'
	(gdb) print s9[1]
	$80 = 101 'e'
	(gdb) print s9[2]
	$81 = 108 'l'
	(gdb) print s9[3]
	$82 = 108 'l'
	(gdb) print s9[4]
	$83 = 111 'o'
	(gdb) print s9[5]
	$84 = 119 'w'
	(gdb) print s9[6]
	$85 = 0 '\000'
	(gdb) print s9[7]
	$86 = 0 '\000'
	(gdb)
	 */

	char s10[9] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
	/**
	(gdb) print s10
	$88 = "yellow\000\000"
	(gdb) print s10[0]
	$89 = 121 'y'
	(gdb) print s10[1]
	$90 = 101 'e'
	(gdb) print s10[2]
	$91 = 108 'l'
	(gdb) print s10[3]
	$92 = 108 'l'
	(gdb) print s10[4]
	$93 = 111 'o'
	(gdb) print s10[5]
	$94 = 119 'w'
	(gdb) print s10[6]
	$95 = 0 '\000'
	(gdb) print s10[7]
	$96 = 0 '\000'
	(gdb) print s10[8]
	$97 = 0 '\000'
	(gdb)
	 */

	char s11[2] = { 'b', 'l', 'u', 'e' };
	/**
	(gdb) print s11
	$98 = "bl"
	(gdb) print s11[0]
	$99 = 98 'b'
	(gdb) print s11[1]
	$100 = 108 'l'
	(gdb)
	 */

	char s12[3] = { 'b', 'l', 'u', 'e' };
	/**
	(gdb) print s12
	$101 = "blu"
	(gdb) print s12[0]
	$102 = 98 'b'
	(gdb) print s12[1]
	$103 = 108 'l'
	(gdb) print s12[2]
	$104 = 117 'u'
	(gdb)
	 */

	char s13[4] = { 'b', 'l', 'u', 'e' };
	/**
	(gdb) print s13
	$105 = "blue"
	(gdb) print s13[0]
	$106 = 98 'b'
	(gdb) print s13[1]
	$107 = 108 'l'
	(gdb) print s13[2]
	$108 = 117 'u'
	(gdb) print s13[3]
	$109 = 101 'e'
	(gdb)
	 */

	char s14[5] = { 'b', 'l', 'u', 'e' };
	/**
	(gdb) print s14
	$110 = "blue"
	(gdb) print s14[0]
	$111 = 98 'b'
	(gdb) print s14[1]
	$112 = 108 'l'
	(gdb) print s14[2]
	$113 = 117 'u'
	(gdb) print s14[3]
	$114 = 101 'e'
	(gdb) print s14[4]
	$115 = 0 '\000'
	(gdb)
	 */

	char s15[6] = { 'b', 'l', 'u', 'e' };
	/**
	(gdb) print s15
	$116 = "blue\000"
	(gdb) print s15[0]
	$117 = 98 'b'
	(gdb) print s15[1]
	$118 = 108 'l'
	(gdb) print s15[2]
	$119 = 117 'u'
	(gdb) print s15[3]
	$120 = 101 'e'
	(gdb) print s15[4]
	$121 = 0 '\000'
	(gdb) print s15[5]
	$122 = 0 '\000'
	(gdb)
	 */

	printf("\n");
	return 0;
}
