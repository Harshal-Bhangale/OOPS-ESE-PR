#include <iostream>

template <typename t>
t findlargest(t n1, t n2)
{
    return (n1 > n2)
               ? n1
               : n2;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    std::cout << findlargest(num1, num2);

    return 0;
}