#include <iostream>
using namespace std;

// Let's use a class! Right now it looks like everything is public. We can do better!
class Board {
  public:
    string board[9];

    // You need a constructor for the Board so that you can set the initial board state.
    // Pay attention to compiler warnings as you write code!
    Board() {
      for(int i = 1; i < 9; i++) {
        board[i] = "_";
      }
    }

    // Notice how we no longer need to pass in the board data structure.
    void markBoard(int cellNumber, string symbol) {
      if(cellNumber < 9 && cellNumber >= 0) {
        this->board[cellNumber] = symbol;
      }
    }

    // Notice how we no longer need to pass in the board data structure.
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
  // Look at our main! We have packaged the data for a board alongside the functionality of the board.
  Board board;

  board.markBoard(0, "X");
  board.markBoard(3, "O");
  board.markBoard(7, "X");
  board.printBoardToScreen();

  return 0;
}
