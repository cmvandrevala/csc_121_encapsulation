#include <iostream>
using namespace std;

int main() {
  string board[9] = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };

  board[0] = "X";
  board[3] = "O";
  board[7] = "X";

  for (int i = 0; i < 9; i++) {
    std::cout << board[i] << " ";
    if((i + 1) % 3 == 0) {
      std::cout << "\n";
    }
  }
  std::cout << "\n";

  return 0;
}
