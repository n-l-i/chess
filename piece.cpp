#include "piece.h"

piece::piece(int row_value, int col_value, char role_value)
{
    row = row_value;
    col = col_value;
    role = role_value;
}
piece::piece()
{
    row = -1;
    col = -1;
    role = 'x';
}
int piece::get_row()
{
    return row;
}
int piece::get_col()
{
    return col;
}
char piece::get_role()
{
    return role;
}
void piece::move_to(int row_value, int col_value)
{
    row = row_value;
    col = col_value;
}

piece get_piece(int row_value, int col_value, piece pieces[])
{
    for (int row{0}; row < 8; ++row)
    {
        for (int col{0}; col < 8; ++col)
        {
            if (pieces[row*8+col].get_row()==row_value and pieces[row*8+col].get_col()==col_value)
            {
                return pieces[row*8+col];
            }
        }
    }
    piece null_piece(-1,-1,' ');
    return null_piece;
}
