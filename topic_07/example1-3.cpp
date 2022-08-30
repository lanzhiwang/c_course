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

class Master : public Student
{
protected:
    const char* domain;
public:
    void setDomain(const char* d)
    {
        domain = d;
    }
    
    const char* getDomain()
    {
        return domain;
    }
};

int main()
{
    Master s;
    
    s.set("Delphi", 100);
    s.setDomain("Software");
    s.info();
    
    printf("Domain = %s\n", s.getDomain());
    
    return 0;
}
