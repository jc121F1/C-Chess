#include <vector>
#include "piece.h"
using namespace std;

int SIZE = 8;

struct Square
{
    ChessPiece occupier;
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
        }
};