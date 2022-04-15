#include <iostream>
using namespace std;

class chess_board{
  public:

    chess_board White_Move(char, char, int);



  
    void set_board();
    void first_move();
    void print();

    // The class keeps the board publically accessible
    char board[8][8];
  private:
    int 
      turn_num,
      turn_color,
      draw_timer;
    
};

// Print the current board state
void chess_board::print()
{
  for (int i = 0; i < 8; ++i){
    for (int j = 0; j<8; ++j){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

// Here we update a chess board with the default state:

void chess_board::set_board()
{
    // Chess Notation Row 8
      board[0][0] = 'r';
      board[0][2] = 'n';
      board[0][1] = 'b';
      board[0][3] = 'q';
      board[0][4] = 'k';
      board[0][5] = 'b';
      board[0][6] = 'n';
      board[0][7] = 'r';

    // Chess Notation Row 7
      board[1][0] = 'p';
      board[1][2] = 'p';
      board[1][1] = 'p';
      board[1][3] = 'p';
      board[1][4] = 'p';
      board[1][5] = 'p';
      board[1][6] = 'p';
      board[1][7] = 'p';

    // Chess Notation Row 6
      board[2][0] = '.';
      board[2][1] = '.';
      board[2][2] = '.';
      board[2][3] = '.';
      board[2][4] = '.';
      board[2][5] = '.';
      board[2][6] = '.';
      board[2][7] = '.';

    // Chess Notation Row 5
      board[3][0] = '.';
      board[3][1] = '.';
      board[3][2] = '.';
      board[3][3] = '.';
      board[3][4] = '.';
      board[3][5] = '.';
      board[3][6] = '.';
      board[3][7] = '.';

    // Chess Notation Row 4
      board[4][0] = '.';
      board[4][1] = '.';
      board[4][2] = '.';
      board[4][3] = '.';
      board[4][4] = '.';
      board[4][5] = '.';
      board[4][6] = '.';
      board[4][7] = '.';

    // Chess Notation Row 3
      board[5][0] = '.';
      board[5][2] = '.';
      board[5][1] = '.';
      board[5][3] = '.';
      board[5][4] = '.';
      board[5][5] = '.';
      board[5][6] = '.';
      board[5][7] = '.';

    // Chess Notation Row 2
      board[6][0] = 'P';
      board[6][1] = 'P';
      board[6][2] = 'P';
      board[6][3] = 'P';
      board[6][4] = 'P';
      board[6][5] = 'P';
      board[6][6] = 'P';
      board[6][7] = 'P';

    // Chess Notation Row 1
      board[7][0] = 'R';
      board[7][1] = 'N';
      board[7][2] = 'B';
      board[7][3] = 'Q';
      board[7][4] = 'K';
      board[7][5] = 'B';
      board[7][6] = 'N';
      board[7][7] = 'R';

  turn_num = 1;
  turn_color = 0;
  draw_timer = 0;
}




void chess_board::first_move()
{
  board[3][3] = 'P';
  board[1][3] = '.';
  
}
/*
chess_board White_Move(char piece, char x, int y, chess_board &board)
{
  while (!(x == 'p' || x == 'n' || x == 'b' || x == 'r'|| x == 'q' || x == 'k'))
  {
    cout << "Invalid piece, please enter a valid piece";
    cin >> piece >> x >> y;
  }
  // Check if piece can be moved. Inpuit is the "target" placement, so check for valid origins per piece type
  // First make a function that can move the e2 pawn to e4


  if (piece == board[])

}

*/