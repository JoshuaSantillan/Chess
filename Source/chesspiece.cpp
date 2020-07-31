Chesspiece::Chesspiece(){
    m_max_spaces;
    move_diagonal;
    move_vertical;
    move_horizontal;

}
Chesspiece::Chesspiece(int max_spaces,bool move_diag,bool move_vert,bool move_horiz){
    m_max_spaces = max_spaces;
    move_diagonal = move_diag;
    move_vertical = move_vert;
    move_horizontal = move_horiz;

    /**
    *==Prototype Objects==
    *Chesspiece Queen(7,true,true,true);
    *Chesspiece Pawn(2,false,true,false);
    *==Eventually, with inheritance==
    *Queen wQ(7,true,true,true);
    *Pawn a2(2,false,true,false);
    *Pawn b2(2,false,true,false);
    *Pawn c2(2,false,true,false);
    */
}
