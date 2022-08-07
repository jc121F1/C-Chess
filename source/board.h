#pragma once
#include "piece.h"
#include <optional>
#include <vector>
using namespace std;

int SIZE = 8;
namespace Board {

struct Move
{
  Piece::ChessPiece m_movingPiece;
  int m_startX, m_startY;
  int m_endX, m_endY;
  ChessBoard& m_board;
  Move(int startX,
       int startY,
       int endX,
       int endY,
       Piece::ChessPiece movingPiece,
       ChessBoard& board)
    : m_startX(startX)
    , m_startY(startY)
    , m_endX(endX)
    , m_endY(endY)
    , m_movingPiece(movingPiece)
    , m_board(board){};
};

struct Square
{
  optional<Piece::ChessPiece> occupier;
  Square(){};
};

class ChessBoard
{
private:
  vector<vector<Square>> board;

public:
  ChessBoard()
  {
    vector<Square> row(SIZE);
    board = vector<vector<Square>>(SIZE, row);
  };
};
}; // namespace Board