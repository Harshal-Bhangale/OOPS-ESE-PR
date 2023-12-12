#include <iostream>
using namespace std;
class myString
{
private:
    string str;

public:
    myString(string str)
    {
        this->str = str;
    }

    // myString(myString &T)
    // {
    //     str = T.str;
    // }

    myString operator+(myString &t)
    {
        return (str + t.str);
    }

    void display()
    {
        std::cout << "String :- " << str;
    }
};

int main()
{
    myString mstr1("Hello ");
    myString mstr2("World");

    myString mstr3 = mstr1 + mstr2;
    mstr3.display();
    return 0;
}