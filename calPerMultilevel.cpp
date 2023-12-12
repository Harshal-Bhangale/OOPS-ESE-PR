// Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class. A class will derived from the above mentioned class which includes a function to find the total marks obtained and another class derived from this class which calculates and displays the percentage of student.

#include <iostream>

class base
{
protected:
    float mathMarks;
    float sciMarks;
    float engMarks;

public:
    void getMarks()
    {
        std::cout << "Enter Math Marks :- ";
        std::cin >> mathMarks;
        std::cout << "Enter Science Marks :- ";
        std::cin >> sciMarks;
        std::cout << "Enter English Marks :- ";
        std::cin >> engMarks;
    }
};

class derived : public base
{
public:
    float totalMark;

public:
    void total()
    {
        totalMark = (mathMarks + sciMarks + engMarks);
    }
};

class cal : public derived
{
public:
    float per;

public:
    void calPer()
    {
        per = (totalMark / 300) * 100;
    }
    void display()  
    {
        std::cout << "Percentage :- " << per;
    }
};

int main()
{
    cal obj;
    obj.getMarks();
    obj.total();
    obj.calPer();
    obj.display();
    return 0;
}