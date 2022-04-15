#include <iostream>
#include "chess.cpp"
using namespace std;

int main()
{
  char 
    z,
    x;
  int 
    y;

  chess_board first_game;

  first_game.set_board();
  first_game.print();


  //first_game.first_move(); // just a simple pre-set E-4 pawn move
  //first_game.print();
  cout << "Enter your move in modern chess notation (piece, grid position): ";
  cin >> z >> x >> y;
  first_game.White_Move(z, x, y);
  first_game.Black_Move('p', 'E', 5);
  first_game.print();
  
}