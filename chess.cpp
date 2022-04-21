#include <iostream>
#include <vector>
#include "chess_header.h"
using namespace std;

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
// Update turn counter, save turn info to "chess_moves"
void chess_board::take_turn()
{
  if (turn_color == 0)
  {
    turn_color = 1;
  } else if (turn_color == 1)
  {
    turn_color = 0;
    ++turn_num;
  }
}
// Just a sample function that plays E4 on the given board
void chess_board::first_move()
{
  board[3][3] = 'P';
  board[1][3] = '.';
  
  take_turn();
}

int chess_board::x_convert(char x)
{
  int x_fixed;
   //transform x into usable int
    switch (x)
    {
      case 'a' : 
      case 'A' : x_fixed = 0;
        break;
      case 'b' : 
      case 'B' : x_fixed = 1;
        break;
      case 'c' : 
      case 'C' : x_fixed = 2;
        break;
      case 'd' : 
      case 'D' : x_fixed = 3;
        break;
      case 'e' : 
      case 'E' : x_fixed = 4;
        break;
      case 'f' : 
      case 'F' : x_fixed = 5;
        break;
      case 'g' : 
      case 'G' : x_fixed = 6;
        break;
      case 'h' : 
      case 'H' : x_fixed = 7;
        break;
      default : x_fixed = -10;
    }
    return x_fixed;
}
int chess_board::y_convert(int y)
{
  int y_fixed;
    //transform y into usable int j
    switch (y)
    {  
      case 1: y_fixed = 7;
        break;
      case 2: y_fixed = 6;
        break;
      case 3: y_fixed = 5;
        break;
      case 4: y_fixed = 4;
        break;
      case 5: y_fixed = 3;
        break;
      case 6: y_fixed = 2;
        break;
      case 7: y_fixed = 1;
        break;
      case 8: y_fixed = 0;
        break;
      default: y_fixed = -10;
    }
  return y_fixed;
}

//This doesn't really work, come back to it. 

void chess_board::Black_Move(char piece, char x, int y)
{
  int i, j;
  if (turn_color == 1)
  {
    while (!(piece == 'p' || piece == 'n' || piece == 'b' || piece == 'r'|| piece == 'q' || piece == 'k'))
    {
      cout << "Invalid piece, please enter a valid piece";
      cin >> piece >> x >> y;
    }
    
    // Convert input from Chess Notation into "array notation"
    i = x_convert(x);
    j = y_convert(y);
   
    if (i != -10 && j != -10) 
    {
      board[j][i] = piece;
    }
    /*
    Add a function to detect the old position, remove the piece from it.
    Add a second function to detect if a capture happened, keep track of captured pieces.
    */
   take_turn();

  // if (piece == board[][])
  }
  else 
  {
    cout << "Something went wrong, it's not your turn!";
  }

}

void chess_board::White_Move(char piece, char x, int y)
{
  bool valid;
  int i, j;
  if (turn_color == 0)
  {
    while (!(piece == 'P' || piece == 'N' || piece == 'B' || piece == 'R'|| piece == 'Q' || piece == 'K'))
    {
      cout << "Invalid piece, please enter a valid piece";
      cin >> piece >> x >> y;
    }
  
    i = x_convert(x);
    j = y_convert(y);
   
   valid = valid_move(piece, x, y);
   
    if (i != -10 && j != -10 && valid == true) 
    {
      board[j][i] = piece;

    }

   take_turn();
  // if (piece == board[][])
  }
  else 
  {
    cout << "Something went wrong, it's not your turn!";
  }
}

bool valid_move(char piece, char column, int row)
{

}