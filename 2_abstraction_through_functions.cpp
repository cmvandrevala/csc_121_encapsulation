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
  // Data structure is still exposed in the public main
  string board[9] = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };

  // But we do have a bit of abstraction when marking the board
  markBoard(0, "X", board);
  markBoard(3, "O", board);
  markBoard(7, "X", board);

  // The code to print the board looks nicer too
  printBoardToScreen(board);

  return 0;
}
