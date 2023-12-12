#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string fileName;
    // std::cout << "Enter File name :- ";
    // std::cin >> fileName;
    ofstream out("Sample.txt");
    out << "My name is harshal";

    ifstream in("Sample.txt");
    string content;
    in >> content;
    cout << content;
    return 0;
}