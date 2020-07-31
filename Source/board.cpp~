#include<iostream>
#include "board.h"
#include "square.h"
#include "chesspiece.cpp"
#include "queen.cpp"
Board::Board()
{

}
/**
 * There must be a better way to generate the initial playing field. I realized than an array is like
 * an array of objects, so it should actually be an array of chesspieces, including a 'blank' piece
 * that acts as an empty square? so the Square class would actually be derived under Chesspiece class.
 */
void create_board() {
  Chesspiece* playing_field[1][1];
  playing_field[0][0] = new Queen(7,false,true,true);
  /*
  playing_field[0][1] = new queen wN(3,false,true,true);
  playing_field[0][2] = new queen wB(7,true,false,false);
  playing_field[0][3] = new queen wK(1,true,true,true);
  playing_field[0][4] = new queen wQ(7,true,true,true);
  playing_field[0][5] = new queen wB(7,true,false,false);
  playing_field[0][6] = new queen wN(3,true,false,false);
  playing_field[0][7] = new queen wR(7,false,true,true);
  playing_field[1][0] = new queen wP(2,false,true,false);
  playing_field[1][1] = new queen wP(2,false,true,false);
  playing_field[1][2] = new queen wP(2,false,true,false);
  playing_field[1][3] = new queen wP(2,false,true,false);
  playing_field[1][4] = new queen wP(2,false,true,false);
  playing_field[1][5] = new queen wP(2,false,true,false);
  playing_field[1][6] = new queen wP(2,false,true,false);
  playing_field[1][7] = new queen wP(2,false,true,false);
*/


}
