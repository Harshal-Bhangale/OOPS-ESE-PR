// Write a C++ Program to find Square function using single template

#include <iostream>

template <typename t>
t Square(t s)
{
    return s * s;
}

int main()
{
    int num;
    std::cout << "Enter num :- ";
    std::cin >> num;
    std::cout << Square(num);
    return 0;
}