#include <stdio.h>

/*
注释规则小结
编译器会在编译过程删除注释，但不是简单的删除而是用空格代替
编译器认为双引号括起来内容都是字符串，双斜杠也不例外
*/

/*
型注释不能被嵌套
*/

int main()
{
    int/*...*/i;
    char* s = "abcdefgh      //hijklmn";

    //Is it a \
    valid comment?

    in/*...*/t i;

    int d = 3;
    int* e = &d;
    int k = d/*e

    return 0;
}
