#include <iostream>
#include <vector>
#include <string>
#include "board.h"

using namespace std;

int main()
{
    vector<string> msg{"", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {   
        cout << word << " ";
    }
    auto board = ChessBoard();
    cout << endl;
    return 0;
}