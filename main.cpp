#include "piece.h"
#include "board.h"

#include <algorithm>

int main()
{
    piece chess_pieces[32];
    char role_setup[] = {'t','h','b','q','k','b','h','t'};
    int rows[] = {0,1,6,7};
    for (int row : rows)
    {
        for (int col{0}; col < 8; col++)
        {
            char role;
            int row_value;
            if (row < 1 or row > 6) { role = role_setup[col]; row_value = std::max(row*8,3*8); }
            else { role = 'f'; row_value = std::max(row*8,2*8); }
            chess_pieces[row_value+col] = piece(row, col, role);
        }
    }
    
    print(chess_pieces);
    
    return 0;
}




