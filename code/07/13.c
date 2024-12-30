#include <stdio.h>

int main(void)
{
	/**
	scanf("%[abcd]", s);
	scanf("%[a-zA-Z]", s);
	scanf("%[a-z A-Z]", s);
	scanf("%[a-z \tA-Z ]", s);
	scanf("%[^0-9]", s);
	scanf("%[^\n]", s);
	 */
	char s[10] = "xxxxxxxxxx";
	scanf("%[abc]", s);
	printf("|s = %s|\n", s);
	return 0;
}

/**
# ./main
abccccccccc
|s = abccccccccc|
#

# ./main
efabccfcfcc
|s = xxxxxxxxxx|
#

# ./main
aefabccfcfcc
|s = a|
#

 */
