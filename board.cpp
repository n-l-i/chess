#include "piece.h"
#include "board.h"

#include <string>
#include <iostream>

void print(piece chess_pieces[])
{
    std::string str_to_print{};
    for (int row{0}; row < 8; ++row)
    {
        str_to_print += "\n¦---¦---¦---¦---¦---¦---¦---¦---¦\n|";
        for (int col{0}; col < 8; col++)
        {
            str_to_print += " ";
            str_to_print += get_piece(row, col, chess_pieces).get_role();
            str_to_print += " ¦";
        }
    }
    str_to_print += "\n¦---¦---¦---¦---¦---¦---¦---¦---¦";
    std::cout << str_to_print << std::endl;
}
