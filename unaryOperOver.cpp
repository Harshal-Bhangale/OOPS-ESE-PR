#include <iostream>

class test
{
private:
    int count;

public:
    test()
    {
        count = 0;
    }

    void operator++()
    {
        ++count;
    }
    void operator--()
    {
        --count;
    }
    void display()
    {
        std::cout << "Count :- " << count;
    }
};

int main()
{
    test t;

    t.display();
    ++t;
    t.display();

    ++t;

    t.display();
    --t;
    t.display();

    return 0;
}