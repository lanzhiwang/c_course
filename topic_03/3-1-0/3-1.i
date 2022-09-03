# 0 "3-1.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "3-1.c"
# 1 "test.h" 1
# 1 "global.h" 1
int global = 10;
# 2 "test.h" 2

const char* NAME = "Hello world!";

void f()
{
}
# 2 "3-1.c" 2
# 1 "global.h" 1
int global = 10;
# 3 "3-1.c" 2
# 11 "3-1.c"
int main()
{
    f();
    return 0;
}
