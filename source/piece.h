
enum Colour
{
    white,
    black
};

class ChessPiece {
    Colour colour;
    public:
        ChessPiece(Colour colour_in) : colour(colour_in){};
        ChessPiece(){};
};