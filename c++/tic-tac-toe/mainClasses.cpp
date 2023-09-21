#include <string>
#include <iostream>
#include "mainFunctions.cpp"

using namespace std;

class BoardGame
{
public:
    void setUser1Name(string name);
    void setUser2Name(string name);
    void setCurrentPlayer(char symbol);
    char getCurrentPlayer(void);
    void addElemToBoard(int pos, char symbol);
    bool checkIfBoardIsFull(void);
    bool checkFourInARow(char symbol);

private:
    string player1Name;
    string player2Name;
    char currentPlayer = 'x';
    bool boardFull;
    char board[16] = {'e'}; // e - empty
    int numberOfTurns = 0;
};

void BoardGame::setUser1Name(string name)
{
    cout << "Input User 1 name: " << endl;
    cin >> player1Name;
    cout << "You're the 'x' user" << endl;
}

void BoardGame::setUser2Name(string name)
{
    cout << "Input User 2 name: " << endl;
    cin >> player2Name;
    cout << "You're the 'o' user" << endl;
}

void BoardGame::addElemToBoard(int pos, char symbol)
{
    if (checkIfSpotIsEmpty(pos))
        board[pos] = symbol;
    else
        cout << "This position is not available,\nChoose another one." << endl;
}

bool BoardGame::checkIfBoardIsFull(void)
{
    bool isFull = false;

    if (numberOfTurns >= 16)
        isFull = true;

    return isFull;
}

bool BoardGame::checkFourInARow(char symbol)
{
    return true;
}
