/**

memcpy 内存块拷贝
void * memcpy ( void * destination, const void * source, size_t num );

memmove 如果 source 和 destination 有重叠的话, 使用 memmove 进行拷贝
void * memmove ( void * destination, const void * source, size_t num );

 */

#include <stdio.h>
#include <string.h>

struct {
	char name[40];
	int age;
} person, person_copy;

int main(void)
{
	char myname[] = "Pierre de Fermat";

	/* using memcpy to copy string: */
	memmove(person.name, myname, strlen(myname) + 1);
	person.age = 46;
	printf("person: %s, %d \n", person.name, person.age);

	/* using memcpy to copy structure: */
	memmove(&person_copy, &person, sizeof(person));

	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
	printf("\n");

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	memmove(arr2, arr1, 20);
	for (size_t i = 0; i < 10; i++) {
		printf("arr2[%ld] = %d\n", i, arr2[i]);
	}
	printf("\n");

	/**
	          source     destination
	               |     |
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	               1, 2, 1, 2, 1, 2, 1, 8, 9, 10

	arr1[0] = 1 #
	arr1[1] = 2
	arr1[2] = 1 *
	arr1[3] = 2
	arr1[4] = 1 #
	arr1[5] = 2
	arr1[6] = 1 *
	arr1[7] = 8
	arr1[8] = 9
	arr1[9] = 10

	 */

	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	memmove(arr1 + 2, arr1, 20);
	for (size_t i = 0; i < 10; i++) {
		printf("arr1[%ld] = %d\n", i, arr1[i]);
	}
	printf("\n");

	return 0;
}

/**

$ ./main
person: Pierre de Fermat, 46
person_copy: Pierre de Fermat, 46

arr2[0] = 1
arr2[1] = 2
arr2[2] = 3
arr2[3] = 4
arr2[4] = 5
arr2[5] = 0
arr2[6] = 0
arr2[7] = 0
arr2[8] = 0
arr2[9] = 0

arr1[0] = 1
arr1[1] = 2
arr1[2] = 3
arr1[3] = 4
arr1[4] = 5
arr1[5] = 6
arr1[6] = 7
arr1[7] = 8
arr1[8] = 9
arr1[9] = 10
arr1[0] = 1
arr1[1] = 2
arr1[2] = 1
arr1[3] = 2
arr1[4] = 3
arr1[5] = 4
arr1[6] = 5
arr1[7] = 8
arr1[8] = 9
arr1[9] = 10

$

 */
