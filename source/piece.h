#pragma once

namespace Piece {
enum Colour
{
  white,
  black
};

enum PieceType
{
  KING,
  QUEEN,
  ROOK,
  BISHOP,
  KNIGHT,
  PAWN
};

class ChessPiece
{
  Colour colour;
  PieceType type;

public:
  ChessPiece(Colour colour_in, PieceType type_in)
    : colour(colour_in)
    , type(type_in){};
  ChessPiece(){};
};

} // namespace Piece