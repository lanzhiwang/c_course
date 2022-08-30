#include <stdio.h>

struct Student
{
    const char* name;
    int number;
    void info()
    {
        printf("Name = %s, Number = %d\n", name, number);
    }
};

int main()
{
    Student s;
    
    s.name = "Delphi";
    s.number = 100;
    s.info();
    
    return 0;
}
