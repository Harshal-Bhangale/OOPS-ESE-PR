// Write a C++ Program to Add two numbers using single inheritance
#include <iostream>

class A
{
public:
    int firstNum;

public:
    void setFirstNumber(int x) { firstNum = x; }
};

class B : public A
{
public:
    int secondNum;

public:
    void getData()
    {
        std::cout << "Enter 1st num :- ";
        std::cin >> firstNum;
        std::cout << "Enter 2nd num :- ";
        std::cin >> secondNum;
    }
    int add()
    {
        int sum = firstNum + secondNum;
        return sum;
    }
};

int main()
{
    B obj;
    obj.getData();
    std::cout
        << "Sum of the numbers is : " << obj.add();
    return 0;
}