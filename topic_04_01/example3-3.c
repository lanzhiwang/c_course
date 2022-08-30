#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start;
    clock_t end;
    int a[10000];
    int b[10000];
    int* pEnd = &a[10000];
    int* pa = NULL;
    int* pb = NULL;
    int i = 0;
    int k = 0;
	
	start = clock();
	
    for(k=0; k<10000; k++)
	{
        for(i=0; i<10000; i++) 
        {
            b[i] = a[i];
        }
    }
    
    end = clock();
    
    printf("Index Timing: %d\n", end - start);
    
    start = clock();
    
    for(k=0; k<10000; k++)
	{
        for(pa=a, pb=b; pa<pEnd;)
        {
            *pb++ = *pa++;
        }
    }
    
    end = clock();
    
    printf("Pointer Timing: %d\n", end - start);
    
    return 0;
}
