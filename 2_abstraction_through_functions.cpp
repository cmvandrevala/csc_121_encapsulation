#include <iostream>
using namespace std;

void markBoard(int cellNumber, string symbol, string *board) {
  board[cellNumber] = symbol;
}

void printBoardToScreen(string *board) {
  for (int i = 0; i < 9; i++) {
    std::cout << board[i] << " ";
    if((i + 1) % 3 == 0) {
      std::cout << "\n";
    }
  }
  std::cout << "\n";
}

int main() {
  string board[9] = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };

  markBoard(0, "X", board);
  markBoard(3, "O", board);
  markBoard(7, "X", board);

  printBoardToScreen(board);

  return 0;
}
