/*
Write a C++ program to demonstrate how a common friend function can be used to
exchange the private values of two classes. (Use call by reference method).
*/

#include <iostream>

class B;

class A
{
private:
    int valueA;

public:
    A(int valueA)
    {
        this->valueA = valueA;
    }

    friend void exchangeValue(A &, B &);

    void display()
    {
        std::cout << "Value of A : " << valueA << std::endl;
    }
};

class B
{
private:
    int valueB;

public:
    B(int valueB)
    {
        this->valueB = valueB;
    }

    friend void exchangeValue(A &, B &);
    void display()
    {
        std::cout << "Value in class B: " << valueB << std::endl;
    }
};

void exchangeValue(A &objA, B &objB)
{
    int temp = objA.valueA;
    objA.valueA = objB.valueB;
    objB.valueB = temp;
}

int main()
{
    A objA(10);
    B objB(20);

    objA.display();
    objB.display();

    exchangeValue(objA, objB);

    objA.display();
    objB.display();

    return 0;
}