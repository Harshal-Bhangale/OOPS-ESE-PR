// Write a C++ program to check a leap year using classes & Object

#include <iostream>
#include <stdbool.h>

class test
{
public:
    int year;

public:
    test(int year)
    {
        this->year = year;
    }
    bool checkLeapYear();
};

bool test::checkLeapYear()
{
    if ((year % 4 == 0 && year % 100 != 100) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    std::cout << "Enter a Year :- ";
    std::cin >> year;

    test t(year);
    if (t.checkLeapYear())
    {
        std::cout << "True";
    }
    else
    {
        std::cout << "False";
    }

    return 0;
}