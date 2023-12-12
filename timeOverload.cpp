#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    bool operator==(Time &t)
    
    {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }

    Time operator>>(Time &t)
    {
        std::cout << "Enter Hours :- ";
        std::cin >> t.hours;
        std::cout << "Enter Minutes :- ";
        std::cin >> t.minutes;
        std::cout << "Enter Seconds :- ";
        std::cin >> t.seconds;
        return *this;
    }

    Time operator<<(Time &t)
    {
        std::cout << "Hours :- " << t.hours;
        std::cout << "\nMinutes :- " << t.minutes;
        std::cout << "\nSeconds :- " << t.seconds;
        return *this;
    }
};

int main()
{
    Time t1, t2;

    std::cout << "Enter first time :- ";
    t1 >> t1;

    std::cout << "Enter second time :- ";
    t2 >> t2;

    if (t1 == t2)
    {
        std::cout << "Both times are the same." << std::endl;
    }
    else
    {
        std::cout << "Times are different." << std::endl;
    }

    std::cout << "Time 1 :- ";
    t1 << t1;
    std::cout << "Time 2 :- ";
    t2 << t2;

    return 0;
}