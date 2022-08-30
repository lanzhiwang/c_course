#include <stdio.h>

void f1(int i)
{
    if( i < 6 )
    {
        printf("Failed!\n");
    }
    else if( (6 <= i) && (i <= 8) )
    {
        printf("Good!\n");
    }
    else
    {
        printf("Perfect!\n");
    }
}

void f2(char i)
{
    switch(i)
    {
        case 'c':
            printf("Compile\n");
            break;
        
        case 'd':
            printf("Debug\n");
            break;
        
        case 'o':
            printf("Object\n");
            break;
            
        case 'r':
            printf("Run\n");
            break;
        
        default:
            printf("Unknown\n");
            break;
            
    }
}

int main()
{
    f1(5);
    f1(9);
    
    f2('o');
    f2('d');
    f2('e');
}