#include "lib.h"

int main()
{
    chessBoard_t board = {0};

    initChessboard(&board);
    printChessboard(board);
    movePiece(&board.whiteKing, 13, 22);
    printChessboard(board);

    return 0;
}
