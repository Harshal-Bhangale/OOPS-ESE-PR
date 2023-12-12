#include <iostream>
using namespace std;

class Factorial
{
private:
    int num;
    int result;

public:
    Factorial(int n)
    {
        num = n;
        result = result;
    }

    // Copy constructor
    Factorial(const Factorial &fact)
    {
        num = fact.num;
        result = fact.result;
    }

    void calculateFactorial()
    {
        for (int i = 1; i <= num; ++i)
        {
            result = result * i;
        }
    }

    void displayResult()
    {
        cout << "Factorial of " << num << " is: " << result << endl;
    }
};

int main()
{
    int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;

    Factorial fact(number); // object created
    fact.calculateFactorial();

    Factorial copyFact(fact); // Copy constructor invoked

    fact.displayResult();
    copyFact.displayResult();

    return 0;
}
