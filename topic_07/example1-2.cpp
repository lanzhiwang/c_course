#include <stdio.h>

struct Student
{
protected:
    const char* name;
    int number;
public:
    void set(const char* n, int i)
    {
        name = n;
        number = i;
    }
    
    void info()
    {
        printf("Name = %s, Number = %d\n", name, number);
    }
};

int main()
{
    Student s;
    
    s.set("Delphi", 100);
    s.info();
    
    return 0;
}
