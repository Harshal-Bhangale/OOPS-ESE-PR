/*
Write class declarations and member function definitions for a C++ base class to
represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime
(number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
*/

#include <iostream>
using namespace std;
class Employee
{
protected:
    int empCode;
    std::string name;

public:
    void setDetails(int code, std::string nm)
    {
        empCode = code;
        name = nm;
    }
    virtual void display() = 0; // pure virtual function
    void getDetails()
    {
        std::cout << "Enter Emp code :- ";
        std::cin >> empCode;
        std::cout << "Enter Emp Name :- ";
        std::cin >> name;
    }
};
class FullTime : public Employee
{
private:
    float dailyRate;
    int noOfDays;
    float salary;

public:
    void getFTEmployeeDetails()
    {
        // getDetails();
        std::cout << "Daily Rate :- ";
        std::cin >> dailyRate;
        std::cout << "Number Of Days :- ";
        std::cin >> noOfDays;
        salary = dailyRate * noOfDays;
    }
    void setFTEmployeeDetails(float dr, int nd, float sl)
    {
        dailyRate = dr;
        noOfDays = nd;
        salary = sl;
    }
    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Name: " << name << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Number of Days Worked: " << noOfDays << endl;
        cout << "Salary: " << salary << endl;
    }
};
class PartTime : public Employee
{
private:
    float hourlyRate;
    int hoursWorked;

public:
    void getPTEmployeeDetails()
    {
        // getDetails();
        std::cout << "Hourly Rate :- ";
        std::cin >> hourlyRate;
        std::cout << "Hours Worked :- ";
        std::cin >> hoursWorked;
    }
    void setPTEmployeeDetails(float hr, int hw)
    {
        hourlyRate = hr;
        hoursWorked = hw;
    }
    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Name: " << name << "\n\n";
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Hours Worked: " << hoursWorked << "\n\n";
    }
};
int main()
{
    FullTime ft;
    PartTime pt;

    std::cout << "Menu Drive\n";
    std::cout << "1. Accept Details\n";
    std::cout << "2. Display Details\n";
    std::cout << "3. Search \n";

    int choice;
    std::cout << "Enter a option :- ";
    std::cin >> choice;

    int EMP_SIZE;
    std::cout << "How many employee do you want ? :- ";
    std::cin >> EMP_SIZE;

    switch (choice)
    {
    case 1:
        pt.getDetails();
        int *ptr = new int[EMP_SIZE];
        for (int i = 0; i < EMP_SIZE; i++)
        {
            ptr[i] = i + 1;
            ft.getFTEmployeeDetails();
            pt.getPTEmployeeDetails();
        }
        break;
    }
    return 0;
}