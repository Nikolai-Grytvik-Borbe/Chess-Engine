#include <stdint.h>

typedef uint64_t u64;

typedef struct {
    u64 whitePawns;
    u64 whiteKnights;
    u64 whiteBishops;
    u64 whiteRooks;
    u64 whiteQueens;
    u64 whiteKing;

    u64 blackPawns;
    u64 blackKnights;
    u64 blackBishops;
    u64 blackRooks;
    u64 blackQueens;
    u64 blackKing;
} chessBoard_t;

typedef enum {
    NONE = 0,
    WHITE_PAWN,
    WHITE_ROOK,
    WHITE_KNIGHT,
    WHITE_BISHOP,
    WHITE_QUEEN,
    WHITE_KING,
    BLACK_PAWN,
    BLACK_ROOK,
    BLACK_KNIGHT,
    BLACK_BISHOP,
    BLACK_QUEEN,
    BLACK_KING
} PieceType;
