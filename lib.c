#include "lib.h"

/*
 * Moves a given piece. 
 *
 * Parameters:
 *   *piece - pointer to current games piece. (e.g. &board.whiteKing)
 *   oldPos - integer value for square. (0 -> bottom left, 63 -> top right)
 *   newPos - integer value for square.
 */
void movePiece(u64 *piece, u64 oldPos, u64 newPos)
{
    *piece &= ~(1ULL << oldPos);
    *piece |= (1ULL << newPos);
}

/* 
 * Print to console the name of the piece.
 * 
 * Parameters:
 *   piece - PieceType enum piece
 */
void printPiece(const PieceType piece)
{
    if (piece != NONE) {
        switch (piece) {
            case WHITE_PAWN:    printf("White Pawn\n"); break;
            case WHITE_ROOK:    printf("White Rook\n"); break;
            case WHITE_KNIGHT:  printf("White Knight\n"); break;
            case WHITE_BISHOP:  printf("White Bishop\n"); break;
            case WHITE_QUEEN:   printf("White Queen\n"); break;
            case WHITE_KING:    printf("White King\n"); break;
            case BLACK_PAWN:    printf("Black Pawn\n"); break;
            case BLACK_ROOK:    printf("Black Rook\n"); break;
            case BLACK_KNIGHT:  printf("Black Knight\n"); break;
            case BLACK_BISHOP:  printf("Black Bishop\n"); break;
            case BLACK_QUEEN:   printf("Black Queen\n"); break;
            case BLACK_KING:    printf("Black King\n"); break;
            default:            printf("Unknown piece\n"); break;
        }
    } else {
        printf("The square doesn't have a piece on it\n");
    }
}

/*
 * Check what piece (if any) is on a square.
 *
 * Parameters:
 *   *board - pointer to the current game.
 *   square - integer value for square. (0 -> bottom left, 63 -> top right)
 *
 * Returns:
 *   The type of piece (enum PieceType) on square, or NONE if no piece is on the square.
 */
PieceType checkSquare(const chessBoard_t *board, u64 square)
{
    // create bitmask with the desired square. e.g. (...0 00100...)
    u64 bit_square = (1ULL << square);      

    // use bitwise AND ("&") operator to find if any piece match posision
    if (board->whitePawns & bit_square) {
        return WHITE_PAWN; 
    } else if (board->whiteRooks & bit_square) {
        return WHITE_ROOK;
    } else if (board->whiteKnights & bit_square) {
        return WHITE_KNIGHT; 
    } else if (board->whiteBishops & bit_square) {
        return WHITE_BISHOP;
    } else if (board->whiteQueens & bit_square) {
        return WHITE_QUEEN;
    } else if (board->whiteKing & bit_square) {
        return WHITE_KING; 
    } else if (board->blackPawns & bit_square) {
        return BLACK_PAWN;
    } else if (board->blackRooks & bit_square) {
        return BLACK_ROOK;
    } else if (board->blackKnights & bit_square) {
        return BLACK_KNIGHT;
    } else if (board->blackBishops & bit_square) {
        return BLACK_BISHOP;
    } else if (board->blackQueens & bit_square) {
        return BLACK_QUEEN;
    } else if (board->blackKing & bit_square) {
        return BLACK_KING;
    }
    return NONE;
}

/*
 * Creates bitmasks corresponding to starting posisions for each piece.
 *
 * Parameters:
 *   *board - pointer to the current game
 */
void initChessboard(chessBoard_t *board)
{
    board->whitePawns |= (0xFFULL << 8);
    board->blackPawns |= (0xFFULL << 48);
    board->whiteRooks |= (1ULL << 0) | (1ULL << 7);
    board->blackRooks |= (1ULL << 56) | (1ULL << 63);
    board->whiteKnights |= (1ULL << 1) | (1ULL << 6);
    board->blackKnights |= (1ULL << 57) | (1ULL << 62);
    board->whiteBishops |= (1ULL << 2) | (1ULL << 5);
    board->blackBishops |= (1ULL << 58) | (1ULL << 61);
    board->whiteQueens |= (1ULL << 3);
    board->blackQueens |= (1ULL << 59);
    board->whiteKing |= (1ULL << 4);
    board->blackKing |= (1ULL << 60);
}

// unused
void printChessboard(chessBoard_t board)
{
    u64 state = 0;
    state |= board.whitePawns;
    state |= board.whiteRooks;
    state |= board.whiteKnights;
    state |= board.whiteBishops;
    state |= board.whiteQueens;
    state |= board.whiteKing;
    state |= board.blackPawns;
    state |= board.blackRooks;
    state |= board.blackKnights;
    state |= board.blackBishops;
    state |= board.blackQueens;
    state |= board.blackKing;
    state |= board.whitePawns;

    printPadding();
    for (int i = 63; i >= 0; --i) {
        printf("%llu", (state >> i) & 1);
        if (i % 8 == 0) {
            printf("\n");
        }
    }
    printPadding();
}


