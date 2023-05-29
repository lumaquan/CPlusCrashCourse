#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
    clearBoard();
}

void TicTacToe::clearBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = EMPTY;
        }
    }
    currentPlayer = X;
}

void TicTacToe::putMark(int i, int j)
{
    if (board[i][j] != EMPTY)
    {
        cout << "(" << i << ", " << j << ") is taken." << endl;
        return;
    }
    board[i][j] = currentPlayer;
    currentPlayer = -currentPlayer;
    printBoard();
}

bool TicTacToe::isWin(int mark) const
{
    int win = 3 * mark;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += board[i][j];
        }
        if (sum == win)
            return true;
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += board[j][i];
        }
        if (sum == win)
            return true;
    }
    for (int i = 0; i < 2; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += (i == 0 ? board[j][j] : board[2 - j][j]);
        }
        if (sum == win)
            return true;
    }
    return false;
}

int TicTacToe::getWinner() const
{
    if (isWin(X))
        return X;
    else if (isWin(O))
        return O;
    else
        return EMPTY;
}

void TicTacToe::printBoard() const
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (board[i][j])
            {
            case X:
                std::cout << "X";
                break;
            case O:
                std::cout << "O";
                break;
            case EMPTY:
                std::cout << " ";
                break;
            default:
                break;
            }
            if (j < 2)
                std::cout << "|";
        }
        if (i < 2)
            std::cout << "\n-----\n";
    }
    std::cout << endl;
}