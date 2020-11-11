#pragma once

class piece
{
private:
    int row, col;
    char role;
public:
    piece(int row_value, int col_value, char role_value);
    piece();
    int get_row();
    int get_col();
    char get_role();
    void move_to(int row_value, int col_value);
};

piece get_piece(int row_value, int col_value, piece pieces[]);
