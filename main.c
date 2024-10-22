#include "lib.h"

int main()
{
    chessBoard_t board = {0};
    initChessboard(&board);

    getPossibleMoves(&board, 64);
    getPossibleMoves(&board, -1);

    return 0;
}
