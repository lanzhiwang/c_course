#include <stdio.h>
#include <string.h>

struct Student
{
    char* name;
    int number;
};

int main()
{
    struct Student s;
    
    strcpy(s.name, "Delphi Tang"); // OOPS!
    
    s.number = 99;
    
    
    return 0;
}
