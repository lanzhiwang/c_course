#include <stdio.h>

int f1(int n)
{
    int ret = 0;
    int i = 0;
    
    for(i=1; i<=n; i++)
    {
        ret += i;
    }
    
    return ret;
}

int f2(int n)
{
    int ret = 0;
    
    while( (n > 0) && (ret += n--) );
    
    return ret;
}

int f3(int n)
{
    int ret = 0;
    
    if( n > 0 )
    {
        do
        {
            ret += n--;
        }while( n );
    }
    
    return ret;
}

int main()
{
    printf("%d\n", f1(10));
    printf("%d\n", f2(10));
    printf("%d\n", f3(10));
}