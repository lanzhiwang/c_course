#include <stdio.h>

#define ERROR -1
#define PI 3.1415926
#define PATH1 "/Users/huzhi/work/code/c_code/c_course_01"
#define PATH2 /Users/huzhi/work/code/c_code/c_course_01
#define PATH3 /Users/huzhi/work/code/c_code\
/c_course_01

int main()
{
    printf("%d\n", ERROR);
    printf("%f\n", PI);
    printf("%s\n", PATH1);
    printf("%s\n", PATH2);
    printf("%s\n", PATH3);
    /*
    printf("%d\n", -1);
    printf("%f\n", 3.1415926);
    printf("%s\n", "/Users/huzhi/work/code/c_code/c_course_01");
    printf("%s\n", /Users/huzhi/work/code/c_code/c_course_01);
    printf("%s\n", /Users/huzhi/work/code/c_code/c_course_01);
    */
    return 0;
}
