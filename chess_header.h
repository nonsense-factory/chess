#pragma once

class chess_board{
  public:

    void White_Move(char, char, int);
    void Black_Move(char, char, int);

    void set_board();
    void first_move();
    void print();

    // The class keeps the board publically accessible
    
    // The class also keeps track of all moves. In [my] chess notation moves are 4 char long
    // data needs to be added as moves are made, so I use vectors.
        /*
        I think here is where i'll want to look into "friend" classes, functions and things 
        because storing this data in the same class as chess_board seems awkward
        */

    char board[8][8];
  
  
  
  private:
  
  
  
    int 
      // keeps track of what turn this is, starting with turn 1. 
      turn_num,
      // turn color here intended to keep track of which "half" of the turn we are in. 
      turn_color,
      // In chess, if there are no pawn moves or captures in 60 moves, the game ends in a draw
      draw_timer;


    void take_turn();
    int x_convert(char);
    int y_convert(int);    
    bool valid_move(char, char, int);
};