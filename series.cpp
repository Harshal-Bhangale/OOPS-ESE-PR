#include <iostream>
using namespace std;

class Series
{
private:
    int n;
    int sum;

public:
    // Parameterized constructor
    Series(int num)
    {
        n = num;
    }

    // Copy constructor
    Series(const Series &s)
    {
        n = s.n;
        sum = s.sum;
    }

    // Inline member function to calculate series sum
    void calculateSum()
    {
        for (int i = 1; i <= n; ++i)
        {
            sum += i * i;
        }
    }

    // Function to display series sum
    void displaySum()
    {
        cout << "Sum of the series S = 1^2 + 2^2 + ... + " << n << "^2 is: " << sum << endl;
    }
};

int main()
{
    int num;
    cout << "Enter the value of n for the series: ";
    cin >> num;

    Series s(num);
    s.calculateSum();

    Series copySeries = s; // Copy constructor invoked

    s.displaySum();
    copySeries.displaySum();

    return 0;
}
