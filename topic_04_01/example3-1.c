#include <stdio.h>
#include <malloc.h>

int main()
{
    char s1[] = {'H', 'e', 'l', 'l', 'o'};
    int i = 0;
    char s2[] = {'W', 'o', 'r', 'l', 'd'};
    char* p0 = s1;
    char* p1 = &s1[3];
    char* p2 = s2;
    int* p = &i;
	
    printf("%d\n", p0 - p1);
    printf("%d\n", p0 + p2);
    printf("%d\n", p0 - p2);
    printf("%d\n", p0 - p);
    printf("%d\n", p0 * p2);
    printf("%d\n", p0 / p2);
	
    return 0;
}
