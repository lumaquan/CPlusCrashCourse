#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

const int X = 1;
const int O = -1;
const int EMPTY = 0;

class TicTacToe
{

public:
    TicTacToe();
    void clearBoard();
    void putMark(int, int);

    bool isWin(int mark) const;
    int getWinner() const;
    void printBoard() const;

private:
    int board[3][3];
    int currentPlayer;
};

#endif
