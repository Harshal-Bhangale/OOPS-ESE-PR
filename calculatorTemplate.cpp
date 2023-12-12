#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1;
    T num2;

public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    T add()
    {
        return num1 + num2;
    }

    T subtract()
    {
        return num1 - num2;
    }

    T multiply()
    {
        return num1 * num2;
    }

    T divide()
    {
        if (num2 == 0)
        {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main()
{
    Calculator<int> intCalc(10, 5);
    Calculator<float> floatCalc(12.5, 2.5);

    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << intCalc.add() << endl;
    cout << "Subtraction: " << intCalc.subtract() << endl;
    cout << "Multiplication: " << intCalc.multiply() << endl;
    cout << "Division: " << intCalc.divide() << endl;

    cout << "\nFloat Calculator:" << endl;
    cout << "Addition: " << floatCalc.add() << endl;
    cout << "Subtraction: " << floatCalc.subtract() << endl;
    cout << "Multiplication: " << floatCalc.multiply() << endl;
    cout << "Division: " << floatCalc.divide() << endl;

    return 0;
}
