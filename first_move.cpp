#include <iostream>
#include "chess.cpp"
using namespace std;

int main()
{
  chess_board first_game;

  first_game.set_board();
  first_game.print();
/*
  for (int i =0; i < 8; ++i){
    for (int j = 0; j<8; ++j){
      cout << first_game.board[i][j] << " ";
    }
    cout << endl;
  }
*/

  first_game.first_move();

  for (int i = 0; i < 8; ++i){
    for (int j = 0; j<8; ++j){
      cout << first_game.board[i][j] << " ";
    }
    cout << endl;
  }
  
}