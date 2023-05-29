#include "TicTacToe.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  srand((unsigned)time(NULL));
  TicTacToe game;
  while (game.getWinner() == EMPTY)
  {
    int row = rand() % 3;
    int column = rand() % 3;
    game.putMark(row, column);
    std::cout << endl;
  }
  std::cout << game.getWinner() << " wins!" << endl;
}