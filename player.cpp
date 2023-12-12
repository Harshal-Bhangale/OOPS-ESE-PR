#include <iostream>
#include <string>
using namespace std;
class Player
{
public:
    int playerNo;
    string playerName;
    int noOfMatches;
    int *goals;

public:
    Player(int playerNo, string playerName, int noOfMatches)
    {
        this->playerNo = playerNo;
        this->playerName = playerName;
        this->noOfMatches = noOfMatches;
        goals = new int[noOfMatches];
    }

    void setGoals(int matchNo, int numGoals)
    {
        goals[matchNo] = numGoals;
    }

    void display()
    {
        cout << "Name :- " << playerName;
        cout << "No :- " << playerNo;
        cout << "No of Matches :- " << noOfMatches;
        cout << "Goal in each match :- " << std::endl;
        for (int i = 0; i < noOfMatches; ++i)
        {
            cout << i + 1 << " " << goals[i] << std::endl;
        }
    }

    ~Player()
    {
        delete[] goals;
    }
};

int main()
{
    Player player1(10, "John", 5);

    // Setting goals for each match
    player1.setGoals(0, 2);
    player1.setGoals(1, 1);
    player1.setGoals(2, 3);
    player1.setGoals(3, 0);
    player1.setGoals(4, 2);

    // Displaying player details
    player1.display();
    return 0;
}