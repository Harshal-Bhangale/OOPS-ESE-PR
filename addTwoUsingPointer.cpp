// Write a C++ Program to add two numbers using pointers in C++( Use Classes & Objects)

#include <iostream>

class test
{
public:
    int add(int *a, int *b)
    {
        return (*a) + (*b);
    }
};

int main()
{
    test t;

    int first, second;
    std::cout << "Enter first number :- ";
    std::cin >> first;
    std::cout << "Enter second number :- ";
    std::cin >> second;

    std::cout << t.add(&first, &second);

    return 0;
}