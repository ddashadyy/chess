#include "chess.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Figure*> *figures = new std::vector<Figure*>();

    King* king = new King();
    Queen* queen = new Queen();
    Rook* rook = new Rook();
    Knight* knight = new Knight();
    Bishop* bishop = new Bishop();
    Pawn* pawn = new Pawn();

    figures->push_back(king);
    figures->push_back(queen);
    figures->push_back(rook);
    figures->push_back(knight);
    figures->push_back(bishop);
    figures->push_back(pawn);

    std::cout << figures->size() << std::endl;

    delete figures;
    delete king;
    delete queen;
    delete rook;
    delete knight;
    delete bishop;
    delete pawn;

    

    return 0;
}