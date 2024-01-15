#include <iostream>
using namespace std;

class Board {
  string board[9];

  public:
    Board() {
      for(int i = 1; i < 9; i++) {
        board[i] = "_";
      }
    }

    void markBoard(int cellNumber, string symbol) {
      if(cellNumber < 9 && cellNumber >= 0) {
        this->board[cellNumber] = symbol;
      }
    }

    void printBoardToScreen() {
      for (int i = 0; i < 9; i++) {
        std::cout << this->board[i] << " ";
        if((i + 1) % 3 == 0) {
          std::cout << "\n";
        }
      }
      std::cout << "\n";
    }
};

int main() {
  Board board;

  board.markBoard(0, "X");
  board.markBoard(3, "O");
  board.markBoard(7, "X");
  board.printBoardToScreen();

  return 0;
}
