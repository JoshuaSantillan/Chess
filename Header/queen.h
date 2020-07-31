#include<iostream>
#include"chesspiece.h"
class Queen: public Chesspiece
{
private:

public:
  Queen();
  Queen(int max_spaces,bool move_diag,bool move_vert,bool move_horiz);
  void change_space();
};
