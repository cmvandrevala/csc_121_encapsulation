#include <iostream>
using namespace std;

int main() {
  // Data structure is exposed in the public main
  string board[9] = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };

  // We are directly modifiying a data structure with no safety!
  board[0] = "X";
  board[3] = "O";
  board[7] = "X";

  // The code to print a board to the screen is exposed with all of its internals public
  for (int i = 0; i < 9; i++) {
    std::cout << board[i] << " ";
    if((i + 1) % 3 == 0) {
      std::cout << "\n";
    }
  }
  std::cout << "\n";

  return 0;
}
