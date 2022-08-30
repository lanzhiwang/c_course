#include <stdio.h>
#include <string.h>

struct Product 
{
    char name[128];
    int price;
};

struct Product pro[1000];
struct Product sale;

void waitForSale()
{
    printf("Record Product: ");
    scanf("%s %d", sale.name, &sale.price);
}

int main()
{
    int i = 0;
    
    for(i=0; i<1000; i++) 
    {
        waitForSale();
        
        strcpy(pro[i].name, sale.name);
        
        pro[i].price = sale.price;
        
        printf("%s, %d\n", pro[i].name, pro[i].price);
    }
    
    return 0;
}

