#include <iostream>
using namespace std;

void markBoard(int cellNumber, string symbol, string *board) {
  if(cellNumber < 9 && cellNumber >= 0) {
    board[cellNumber] = symbol;
  }
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

  // We can add some validations to make sure the user's input is not out of range
  markBoard(5000, "X", board);
  markBoard(-24, "O", board);

  printBoardToScreen(board);

  return 0;
}
