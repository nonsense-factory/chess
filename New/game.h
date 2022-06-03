struct board
{
  int board[8][8]; 
};

class Game
{
  public:

  void start(board&);

  int check_turn();



  private:
  enum turn {WHITE, BLACK};
  enum turn current_turn;

};