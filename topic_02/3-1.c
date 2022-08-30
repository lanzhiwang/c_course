#include <stdio.h>

int main()
{

    char c = " ";
    
    while( c=="\t" || c==" " || c=="\n" )
    {
        scanf("%c", &c);
    }
    
    return 0;
}
